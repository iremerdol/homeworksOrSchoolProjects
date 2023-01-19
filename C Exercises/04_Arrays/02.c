#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n], i;
	
	printf("Enter the elements of array:\n");
	
	for(i=0;i<n;i++)
	   scanf("%d", &arr[i]);
	   
	for(i=n-1;i>=0;i--)
	    printf("%d ", arr[i]);
		
	return(0);	   
}
