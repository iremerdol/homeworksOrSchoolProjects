#include<stdio.h>
#define PI 3.14
 int main(void)
{
	float r, perimeter, area;
	
	printf("Enter one side of a square:");
	scanf("%f", &r);
	
	perimeter = 2 * PI * r;
	area = PI * r * r;
	
	printf("The area of the square is %f\n", area);
	printf("The perimeter of the square is %f\n", perimeter);
	
	return(0);
}
