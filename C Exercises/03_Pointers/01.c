#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[] = {11, 22, 36, 5, 2};
    int sum=0, *p;

    for (p = &a[0]; p<=&a[4]; p++)
        sum+=*p;
    
    printf("Sum is %d", sum);
    
    return(0);
}

//finding the sum of the elements of array by using pointer
