#include <stdio.h>
#define MAX 50
/* CENG104  
Author: Evren*/
typedef struct{
	int id;
	char name[MAX], surname[MAX];
	double salary;
}employee_t;

void swap(employee_t *x, employee_t *y)
{
	employee_t temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* Recursive bubble sort */
void bubble_sort(employee_t ar[], int n)
{
	int k;
	int sorted = 1;
	for (k = 0; k < n - 1; k++)
	{
		if (ar[k].id> ar[k + 1].id)
		{
			swap(&ar[k], &ar[k + 1]);
			sorted = 0;
		}
	}
	/* if the array is not sorted at the end of a pass,
	make another pass */
	if (!sorted)
		bubble_sort(ar, n - 1);
}
//recursive binary search function
int binary_search(employee_t ar[], int top, int bottom, int id)
{
	int middle;

	if (top > bottom)
		return (-1);
	else
	{
		middle = (top + bottom) / 2;

		if (id == ar[middle].id)
			return (middle);
		else if (id < ar[middle].id)
			bottom = middle - 1;
		else
			top = middle + 1;

		return (binary_search(ar, top, bottom, id));
	}
}
/*
int binary_search(employee_t ar[], int top, int bottom, int id)
{
int middle;

if (top > bottom)
return (-1);
else
{
middle = (top + bottom) / 2;

if (id == ar[middle].id)
return (middle);
else if (id < ar[middle].id)
return (binary_search(ar, top, middle - 1, id));
else
return (binary_search(ar, middle + 1, bottom, id));
}
}*/

void main()
{
	employee_t emp[MAX];
	FILE *pemp;
	char filename[30];
	int status, i, ind, id, k;

	printf("Enter the file name:");
	scanf("%s", filename);

	pemp = fopen(filename, "r");

	while (pemp == NULL)
	{
		printf("File not found Enter again:");
		scanf("%s", filename);

		pemp = fopen(filename, "r");
	}

	i = 0;
	//getting the employee information in to the structure array
	status = fscanf(pemp, "%d %s %s %lf", &emp[i].id, emp[i].name, emp[i].surname, &emp[i].salary);

	while (status != EOF)
	{
		i++;
		status = fscanf(pemp, "%d %s %s %lf", &emp[i].id, emp[i].name, emp[i].surname, &emp[i].salary);
	}
	fclose(pemp);
	bubble_sort(emp, i);

	//getting an id from the user to search
	printf("\nEnter an employee id (-1 to stop): ");
	scanf("%d", &id);

	while (id != -1)
	{

		ind = binary_search(emp, 0, i, id);

		if (ind == -1)//if id not found
			printf("\nID not found!!!\n\n\n");
		else
		{//if it is found displaying the info.
			printf("\nSearch Result\n");
			printf("*************\n");
			printf("%d %-10s %-10s %6.1f\n\n", emp[ind].id, emp[ind].name, emp[ind].surname, emp[ind].salary);
		}

		printf("\nEnter an employee id (-1 to stop): ");
		scanf("%d", &id);
	}
}
