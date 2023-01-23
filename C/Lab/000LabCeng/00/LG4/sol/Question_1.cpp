
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
CENG104 LabGuide 4, Protracting
Author: EVREN
*/
typedef struct {
	char name[20];
	char surname[20];
	int employeeID;
	int age;
	int salary;
	char department[20];
}emp_t;

void printEmp(emp_t emp)
{
	printf("\nEmployee Information\n");
	printf("--------------------\n");
	printf("Name : %s\nSurname : %s\nEmployee ID : %d\nAge : %d\nSalary : %d\nDepartment : %s\n", emp.name,
		emp.surname, emp.employeeID, emp.age, emp.salary, emp.department);
}

void  split(char *str, emp_t *emp)
{
	char data[6][20];
	int posStart;
	int field;
	int i;

	posStart = 0;
	field = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ':')
		{
			strncpy(data[field], str + posStart, i - posStart);
			data[field][i - posStart] = '\0';
			posStart = i + 1;
			field++;
		}
	}
	strncpy(data[field], str + posStart, i - posStart);
	data[field][i - posStart] = '\0';
	/* copy to structure */

	strcpy(emp->name, data[0]);
	strcpy(emp->surname, data[1]);
	emp->employeeID = atoi(data[2]);
	emp->age = atoi(data[3]);
	emp->salary = atoi(data[4]);
	strcpy(emp->department, data[5]);
}

int main(void)
{
	char str[80];
	int inc;
	emp_t myEmp;

	printf("Enter an employee: ");
	scanf("%[^\n]", str);

	split(str, &myEmp);

	printf("Enter increase in the salary: ");
	scanf("%d", &inc);

	myEmp.salary += inc;
	printEmp(myEmp);

	return(0);

}

