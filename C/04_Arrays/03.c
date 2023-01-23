#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n], i, sum=0;
	
	printf("Enter the elements of array: ");
	
	for(i=0; i<n; i++)
	    scanf("%d", &arr[i]);
	    
	for(i=0; i<n; i++)
		sum+=arr[i];
		
	printf("Sum of the elements of this array is %d", sum);
	
	return(0);    
	   
}
