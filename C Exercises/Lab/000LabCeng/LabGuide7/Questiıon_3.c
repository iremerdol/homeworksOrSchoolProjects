#include<stdio.h>
#include<stdlib.h>

void cut_the_num(double *x, int *integerPart, double *fractionalPart, int *roundedNum){	
	
	*integerPart = *x;
    *fractionalPart = *x - *integerPart;
	*roundedNum = *integerPart;
		
	if(*fractionalPart>=0.5){
		*roundedNum = *integerPart+1;
	}
	
}

int main(){
	
	double n, f;
	int i=1, k, r;
	
		for(i=1; i<=5; i++){
			printf("Enter %d. number: ", i);
			scanf("%lf", &n);
			
		cut_the_num(&n, &k, &f, &r);	
		
		printf("\ninteger part   : %d, ", k);
		printf("fractional part: %.4lf\n", f);
		printf("rounded number : %d\n**************************************************\n", r);	

	}
			
	return 0;
}
