#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={5, 1, 1}, i, n=0;
	
    for(i=0;i<3;i++){
    	if(arr[i]==arr[i+1])
	        n++;
	    else continue;
	}
	
	printf("Total number of duplicate element found int the array is %d", n);
	
	return(0);
}
