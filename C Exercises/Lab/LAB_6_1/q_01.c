#include<stdio.h>


int main(){
	
	int num = 32, guess;
	printf("Make a guess: ");
	scanf("%d", &guess);
	
	while(1){
		if(guess < num){
		    printf("Wrong! Up please!  New guess: ");
		    scanf("%d", &guess);
		 continue;
		}
		else if(guess > num){
			printf("Wrong! Down please!  New guess: ");
			scanf("%d", &guess);
		continue;	
		}
	    else{
	    	printf("Yes this is the correct guess! Thank you!");
		break;
		}
	}
	
	return 0;
}
