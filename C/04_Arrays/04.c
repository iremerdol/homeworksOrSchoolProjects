#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ar1[]={15, 10, 12}, i, ar2[3];
	
	for(i=0; i<3; i++)
		ar2[i]= ar1[i];
	
	printf("The elements of the first array:\n");
	for(i=0; i<3; i++)
	    printf("%d ", ar1[i]);
	
	printf("\nThe elements copied into the second array:\n");    
	for(i=0; i<3; i++)
	    printf("%d ", ar2[i]);
	    
	return(0);     
}
