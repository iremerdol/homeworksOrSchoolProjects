#include <stdio.h>
int main (){
	
	int flag = 1;
	double price;
	char county;
	
	printf("Please ebter the total price :");
	scanf("%lf", &price);
	while(flag){
		printf("Please enter your county (A/B/C) :");
		scanf("%c", &county);
	
	switch(county){
		case 'A' : printf("You have to total pay : %lf", price * 1.07);
		flag = 0;
		break;
		case 'B' : printf("You have to total pay : %lf", price * 1.06);
		flag = 0;
		break;
		case 'C' : printf("You have to total pay : %lf", price * 1.04);
		flag = 0;
		break;
		default : printf("Wrong character. Please try enter county.\n");
	}	}

return 0;}
