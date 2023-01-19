#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int num, guess;
	
	printf("Make a Guess: ");
	scanf("%d", &guess);
    srand(time(0));
    num = rand() % 100;
	    		
	while(1){
		if(guess<num){
			printf("Wrong! Up Please!  New Guess: ");
			scanf("%d", &guess);
			continue;
		}	
		else if(guess>num){
			printf("Wrong! Down Please!  New Guess: ");
			scanf("%d", &guess);
			continue;
		}
		else if(guess=num){
			printf("Yes this is the correct guess! Thank you!");
			break;
		}	
	}
	
	return 0;
}
