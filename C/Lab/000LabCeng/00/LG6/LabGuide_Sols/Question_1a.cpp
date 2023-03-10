#include<stdio.h>
#include<string.h>
#define SIZE1 100
#define SIZE2 20
#define SIZE3 10
/*
CENG114 LabGuide 4, Protracting
Author: EVREN
*/
//person information
typedef struct
{
	char name[SIZE2];
	char sname[SIZE2];
	char plate[SIZE3];
}person_t;

//search list for a plate using Sequential search algorithm
int seqSearch(person_t data[], int n, char srchPlate[], int *comp)
{
	int i;

	for (i = 0; i<n; i++)
	{
		(*comp)++;

		if (strcmp(data[i].plate, srchPlate) == 0)
			return i;
	}
	return(-1);
}

int main()
{
	person_t data[SIZE1];
	int i = 0, comp, status, indx;
	char srchPlate[SIZE2];

	FILE *inp = fopen("plates.txt", "r");

	//read person information from file into the structure array
	status = fscanf(inp, "%s", data[i].name);
	while (status != EOF)
	{
		fscanf(inp, "%s", data[i].sname);
		fscanf(inp, "%s\n", data[i].plate);
		i++;

		status = fscanf(inp, "%s", data[i].name);
	}

	//read a plate to search until "END" is given
	printf("Enter plate of a car (END for exit): ");
	scanf("%s", srchPlate);

	while (strcmp(srchPlate, "END") != 0)
	{
		comp = 0;
		indx = seqSearch(data, i, srchPlate, &comp);
		if (indx != -1)
			printf("%s %s %s\n", data[indx].name, data[indx].sname, data[indx].plate);
		else
			printf("NOT FOUND\n");

		printf("%d comparisons.\n\n", comp);

		printf("Enter plate of a car (END for exit): ");
		scanf("%s", &srchPlate);
	}

	return 0;
}
