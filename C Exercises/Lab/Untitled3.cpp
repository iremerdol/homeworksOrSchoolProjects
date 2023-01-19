#include<stdio.h>
#define P 4.3
#define T 5.7
 int main(void)
{
	float x, y, summation, avarage;
	
	printf("Enter a number:");
	scanf("%f", &x);
	printf("Enter a number:");
	scanf("%f", &y);
	
	summation = x + y + P + T;
	avarage = (x + y + P + T) / 4;
	
	printf("summation is %f\n", summation);
	printf("avarage is %f\n", avarage);
	
	return(0);
}
