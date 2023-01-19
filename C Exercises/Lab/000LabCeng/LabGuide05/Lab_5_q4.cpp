#include<stdio.h>
#include<math.h>

int main()
{
	int num, reverse, n;
	
		printf("\nEnter a positive number: ");
		scanf("%d", &num);
	while(num!=0){
		
		
		for(num; num <= 0;){
			printf("Sorry! You didn't give a positive number!!!\n");
			break;
		}
	    for(num; num > 0;){
	    	reverse = num % 10;
	    	num = num / 10;
	    
		switch(reverse){
			case 0: printf("ZERO ");
			break;
			case 1: printf("ONE ");
			break;
			case 2: printf("TWO");
			break;
			case 3: printf("THREE ");
			break;
			case 4: printf("FOUR ");
			break;
			case 5: printf("FIVE ");
			break;
			case 6: printf("SIX ");
			break;
			case 7: printf("SEVEN ");
			break;
			case 8: printf("EIGHT ");
			break;
			case 9: printf("NINE ");
			break;
		}	
		}
	
		printf("\nEnter a positive number: ");
		scanf("%d", &num);
	}
	}

