#include<stdio.h>
 int main(void)
{
	double a, perimeter, area;
	
	printf("Enter one side of a square:");
	scanf("%lf", &a);
	
	perimeter = 4 * a;
	area = a * a;
	
	printf("The area of the square is %lf\n", area);
	printf("The perimeter of the square is %lf\n", perimeter);
	
	return(0);
}

