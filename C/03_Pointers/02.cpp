#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a[5], *p;
	printf("Enter 5 elements in the array : ");
	for(p=a; p<= a+4; p++)
	    scanf("%d", p);
	    
    printf("Elements in reverse order :\n");
    for(p= a+4; p>=a; p--)
        printf("%d\t", *p);
            
	return(0);
}

//reversing the elements of an array by using pointers
