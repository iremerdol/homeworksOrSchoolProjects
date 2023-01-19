#include <stdio.h>
#define P 4.3
#define T 5.7
 int main(void)
{
	double x, y, summation, avarage;
	
	printf("Enter a number:");
	scanf("%lf", &x);
	printf("Enter a number:");
	scanf("%lf", &y);
	
	summation = x + y + P + T;
	avarage = (x + y + P + T) / 4;
	
	prinf("summation is %lf\n", summation);
	printf("avarage is %lf\n", avarage);
	
	return(0);
}
