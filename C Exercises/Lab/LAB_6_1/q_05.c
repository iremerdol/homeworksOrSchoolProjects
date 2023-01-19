#include<stdio.h>

int main(){
	
	int num, guess;
		
	printf("Enter a guess (between 0 and 99): ");
    scanf("%d", &guess);
    
	srand(time(0));
	num = rand() % 100;
	
	do{	
    	if(guess > 99 && guess < 0){
    		printf("Your guess should be between 0 and 99. Enter a new guess: ");
    		scanf("%d", &guess);
    		continue;
		}
		
		else if(guess < num){
			printf("Wrong! Go Up!\nEnter a new guess (between 0 and 99): ");
			scanf("%d", &guess);
			continue;
		}
		
		else if(guess > num){
			printf("Wrong Go Down!\nEnter a new guess (between 0 and 99): ");
			scanf("%d", &guess);
			continue;
		}
		
		else if(num = guess){
			printf("Congratulations!!!");
			break;
		}
		
	}while(1);
	
	return 0;
}
