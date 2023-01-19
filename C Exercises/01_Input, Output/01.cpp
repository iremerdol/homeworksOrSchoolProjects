#include<stdio.h>
#include<stdlib.h>

int main(){
    double fahrenheit, celcius;
    
	printf("Enter a temperature in Centigrade: \n");
	scanf("%lf", &celcius);
	
	fahrenheit = celcius * 1.8 + 32.0;
	
	printf("This equals to %.2lf degrees Fahrenheit.", fahrenheit);

    return(0);
}
