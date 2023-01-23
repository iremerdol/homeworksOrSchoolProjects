#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[]={3, 2, 2, 5}, i;
	
	for(i=0;i<4;i++){
		if(arr[i]!=arr[i+1]) printf("%d ", arr[i]);
		else continue;
	}
	return(0);
}
