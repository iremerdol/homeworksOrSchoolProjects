#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10], r;
	
    printf("Write down the elements of array: ");
    
	for(r=0;r<10;r++)
	    scanf("%d", &arr[r]);
	    
	for(r=0;r<10;r++)
		printf("%d\t", arr[r]);
	
	return(0);    
}
