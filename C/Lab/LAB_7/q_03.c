#include<stdio.h>

int main(){
	
	double x, fractionalPart;
	int i=1, integerPart, roundedNum;
	
		for(i=1; i<=5; i++){
			printf("Enter %d. number: ", i);
			scanf("%lf", &x);
		
        integerPart = x;
        fractionalPart = x - integerPart;
		roundedNum = integerPart;
		
		if(fractionalPart>=0.5){
			roundedNum = integerPart+1;
		}
		
		printf("\ninteger part   : %d, ", integerPart);
		printf("fractional part: %.4lf\n", fractionalPart);
		printf("rounded number : %d\n**************************************************\n", roundedNum);	
	   }
	
	return 0;
}
