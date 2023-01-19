#include<stdio.h>

void scan_fraction(int *nump, int *denomp){
	
	char slash, discard;
	int status, error;
	
	do{
		error=0;
		
		printf("Enter a common fraction as to integers separated by a slash --> ");
		status=scanf("%d %c%d", nump, &slash, denomp);
		
		if(status<3){
			error=1;
			printf("Invalid - please read directions carefully\n");
		}
		
		else if(slash != '/'){
			error=1;
			printf("Invalid - separate numerator and denominator by a slash(/)\n");
		}
		
		else if(*denomp<=0){
			error=1;
			printf("Invalid - denominator must be positive\n");
		}
		
		do{
			scanf("%c", &discard);
		}while(discard!= '\n');
		
	}while(error);
}

int main(){
	
	int num, denom;
	
	scan_fraction(&num, &denom);
	printf("--------------------------------------------------------------------------\n");
	printf("\tNumerator\tDenominator\n\t%d\t\t%d", num, denom);
	
	
	return 0;
}
