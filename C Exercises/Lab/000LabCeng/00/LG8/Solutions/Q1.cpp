#include <stdio.h>
#include<string.h>

typedef struct
{
	char SSN[10];
	char name[20];
	char surname[20];
	char accountcode[20];
}customer_t;

void display(customer_t customer)
{
	printf("\nSSN%9c: %s\nName%8c: %s\nSurname%5c: %s\nAccount Code: %s\n", ' ', customer.SSN, ' ', customer.name, ' ', customer.surname, customer.accountcode);
}

int main()
{

	FILE *inp = fopen("customer_info.bin", "rb");

	customer_t customer ,customer_first, customer_last;
	char SSN[10];
	int i = 0, j = 0, flag = 0, order;

	//1st customer
	fread(&customer_first, sizeof(customer_t), 1, inp);
	printf("\n1st customer\n");
	display(customer_first);

	//pose the file pointer to the last record
	fseek(inp, sizeof(customer_t)*(-1), SEEK_END);

	fread(&customer_last, sizeof(customer_t), 1, inp);
	printf("\nLast customer\n");
	display(customer_last);

	printf("\nCustomer order: ");
	scanf("%d", &order);

	//pose the file pointer to the order th record
	fseek(inp, sizeof(customer_t)*(order - 1), SEEK_SET);

	//order th customer
	fread(&customer, sizeof(customer_t), 1, inp);
	printf("\n%d. customer\n", order);
	display(customer);

	do
	{
		printf("\nSearch for: ");
		scanf(" %[^\n]s", SSN);

		if (strcmp(customer_first.SSN, SSN) == 0)
		{
			printf("\n%s is the first customer\nThe customer after %s", SSN, customer_first.SSN);
			fseek(inp, sizeof(customer_t)*(1), SEEK_SET);
			fread(&customer, sizeof(customer_t), 1, inp);
			display(customer);
			flag = 1;
		}
		else if (strcmp(customer_last.SSN, SSN) == 0)
		{
			printf("\nThe customer before %s", SSN);
			fseek(inp, sizeof(customer_t)*(-2), SEEK_END);
			fread(&customer, sizeof(customer_t), 1, inp);
			display(customer);
			printf("\n%s is the last customer\n", SSN);
			flag = 1;
		}
		else
		{
			rewind(inp);
			fread(&customer, sizeof(customer_t), 1, inp);

			while (!feof(inp) && strcmp(customer.SSN, SSN) != 0)
				fread(&customer, sizeof(customer_t), 1, inp);

			if (feof(inp))
				printf("%s could not be found!\n", SSN);
			else
			{
				display(customer);

				printf("\nPrevious customer before %s", SSN);
				fseek(inp, sizeof(customer_t)*(-2), SEEK_CUR);
				fread(&customer, sizeof(customer_t), 1, inp);
				display(customer);

				printf("\nNext customer after %s", SSN);
				fseek(inp, sizeof(customer_t)*(1), SEEK_CUR);
				fread(&customer, sizeof(customer_t), 1, inp);
				display(customer);

				flag = 1;
			}
		}
	} while (!flag);

	fclose(inp);
	return 0;
}
