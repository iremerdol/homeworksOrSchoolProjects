
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ROW 20
#define MAX_COL 12
//Author: Evren
//enum MONTHS{JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};


// Read the yearly electric bill amounts for all flats 
int
read(double bill[][MAX_COL])
{
	FILE	*inp;

	int	flat=0,
		month=0,
		size = 0,
		status;

	double	newbill;

	inp = fopen("bill.txt", "r");

	if(inp==NULL)
		printf("File can not be opened");
	else
	{
		status = fscanf(inp,"%lf", &newbill);
		while(status!=EOF)
		{
	
			//enum: 
			//for(month=JAN; month <= DEC; month++)
			for(month=0; month < MAX_COL; month++)
			{
				bill[flat][month] = newbill;
				status = fscanf(inp,"%lf", &newbill);
			}	
			flat++;
		}
		size = flat;
		fclose(inp);
	}
	
	return (size);
}

//Find the average expense and the standard deviation for the specified flat
void
find_avg_dev(double bill[][MAX_COL], int flatNo, double *avg, double *stDev)
{
	int	month;
	double	sum = 0,
			sum_stDev = 0;

	//Calculate Avg
	for(month=0; month<MAX_COL; month++)
	{
		sum += *(*(bill+flatNo)+month);
	}

	*avg = sum / MAX_COL;

	//Calculate Standard Deviation
	for(month=0; month<MAX_COL; month++)
	{
		sum_stDev += pow ((*(*(bill+flatNo)+month) - *avg) , 2);
	}
	*stDev = sqrt(sum_stDev / MAX_COL);

}


int
main(void)
{
	double	building[MAX_ROW][MAX_COL],
			avg,
			stDev;
	int	size,
		i,j;

	size = read(building);

	if (size != 0)
	{
		printf("\nFlat No    Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec   Avg   St Dev");
		printf("\n*******    ***   ***   ***   ***   ***   ***   ***   ***   ***   ***   ***   ***   ***   ******\n");
		for(i=0; i<size; i++)
		{
			find_avg_dev(building, i, &avg, &stDev);

			printf("%-8d", i+1);
			for(j=0; j<MAX_COL; j++)
			{
				printf("%6.1f", *(*(building+i)+j));
			}

			printf("%6.1f %8.1f",avg, stDev); 
			printf("\n");	
		}
	}
	return(0);
}
