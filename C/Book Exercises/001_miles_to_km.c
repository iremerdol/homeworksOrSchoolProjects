#include<stdio.h>

int main(){
	double kmh, miles;
	
	printf("Enter a distance in miles: ");
	scanf("%lf", &miles);
	
	kmh = miles * 1.609;
	
	printf("It is %.2lf km.", kmh);
	
	return 0;
}
