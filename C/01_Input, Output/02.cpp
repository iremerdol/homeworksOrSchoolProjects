#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415

int main(){
	
	double volume, radius;
	
	printf("Enter the radius : ");
	scanf("%lf", &radius);
	
	volume = (4.0/3.0) * radius* radius * radius * PI;
	
	printf("Volume of this sphere is %.2lf", volume);
	 
	return(0);
}
