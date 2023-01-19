#include<stdio.h>

int *findMid(int a[], int n);

int main(){
	int a[]={1, 2, 3, 4, 5};
	int n=sizeof(a)/sizeof(a[0]);
	int *mid=findMid(a, n);
	printf("%d", *mid);
	return (0);
}

int *findMid(int a[], int n){
	return &a[n/2];
}

//find the middle element of array
