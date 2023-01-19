#include <stdio.h>
#include <math.h>

int main(){
	char country;
	int amount,i;
	printf("\nEnter the amount of the purchase: ");
	scanf("%d", &amount);
	printf("Enter the country: ");
	scanf(" %c", &country);
	while(true){

		switch(country){
			case 'A': printf("The amount owed is %.2f", amount * 1.07);
				break;
			case 'B': printf("The amount owed is %.2f", amount * 1.06);
				break;
			case 'C': printf("The amount owed is %.2f", amount * 1.04);
				break;
			default:
				printf("Enter the country: ");
				scanf(" %c", &country);
				continue;
				break;
				
		}
		break;
	}
	return 0;
}
