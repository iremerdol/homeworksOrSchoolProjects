#include<stdio.h>

int sum(int a, int b, int *cp){
	
	int result;
	*cp=a+b;
	result=*cp;
	
	return (result);
}

int main(){
	
	int num1, num2, summation, i;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	printf("\tx\ty\tz\n\n");
	
    sum(num1, num2, &summation);
    printf("\t%d\t%d\t%d\n", num1, num2, summation);    
	
	return(0);
}
