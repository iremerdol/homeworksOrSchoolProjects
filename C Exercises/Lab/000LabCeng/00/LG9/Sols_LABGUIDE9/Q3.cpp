#include<stdio.h>
#include "stack_int_Q1.h"
/*Author: Evren
CENG114 LG12*/
#define SENTINEL -9

int menu()
{
	int ch;

	printf("\n\n1) Count Stack");
	printf("\n2) Remove Maximum Element");
	printf("\n3) Send Nth To End");
	printf("\n4) Exit");

	printf("\n\nEnter your choice: ");
	scanf("%d", &ch);

	return(ch);
}

int main(void)
{
	stack_t stack;
	int num, N;
	int choice;

	initialize_s(&stack);

	printf("\nEnter a number: ");
	scanf("%d", &num);

	while (!is_full_s(stack) && num != SENTINEL)
	{
		push(&stack, num);

		printf("\nEnter a number: ");
		scanf("%d", &num);
	}


	choice = menu();

	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			printf("\nSTACK CONTENT\n");
			display_stack(stack);

			printf("\n\nNumber of elements in the stack: %d\n", CountStack(stack));
			break;
		case 2:
			RemMaxStack(&stack);

			printf("\nSTACK CONTENT\n");
			display_stack(stack);
			break;
		case 3:
			printf("\nEnter N: ");
			scanf("%d", &N);

			int stack_size = CountStack(stack);

			if (N<1 || N>stack_size)
				printf("\nN must be between 1 and size of the stack!\n");
			else
				SendNthToEnd(&stack, N);

			printf("\nSTACK CONTENT\n");
			display_stack(stack);

			break;
		}
		choice = menu();
	}

	return 0;
}