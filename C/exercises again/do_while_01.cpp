#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, digit=0, sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	do{
		sum += (n % 10);
		digit++;
		n = n/10;
	}while(n>0);
	
	printf("Summation of digits: %d\nDigit number: %d", sum, digit);
	
	return 0;
	
}
