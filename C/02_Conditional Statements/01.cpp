#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int first, second;
	
	printf("Write two numbers : ");
	scanf("%d%d", &first, &second);
	
	if(first==second)
	printf("They are equal.\n");
	
	else
	printf("They are different.\n");
	
	return(0);
	
}
