#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2, i, j, k;
	
	printf("Enter the size of the first array: ");
	scanf("%d", &n1);
	printf("Enter the size of the second array: ");
	scanf("%d", &n2);
	
	int ar1[n1], ar2[n2], arr[n1+n2];
	
	printf("Enter the elements belong to the first array:\n");
	for(i=0;i<n1;i++)
	    scanf("%d", &ar1[i]);
	
	printf("Enter the elements belong to the second array:\n");
	for(i=0;i<n2;i++)
	    scanf("%d", &ar2[i]);
	    
	for(i=0;i<n1;i++)
	    arr[i]=ar1[i];
	    
	for(j=0;j<n2;j++){
		arr[i]=ar2[j];
		i++;
	}
	
	for(i=0;i<n1+n2;i++){
		for(j=0;j<n1+n2-1;j++){
		if(arr[j]<=arr[j+1]){
			k=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=k;
		}
	    }
    }
	
	
	for(i=0;i<n1+n2;i++)
	    printf("%d ", arr[i]);
	
    return(0);
	   
}
