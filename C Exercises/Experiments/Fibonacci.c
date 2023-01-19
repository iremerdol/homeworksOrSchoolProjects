#include<stdio.h>

int main(){
	
	int firstNum, secondNum, nextNum, i, j=1;
	
	
	while(1){
		
		printf("\nEnter a number(for the number of fibonacci sequal)(Press 1 to exit): ");
		scanf("%d", &j);
		
	if(j>1){
		
		firstNum=1;
		secondNum=1;
		nextNum=2;
		
		printf("%d, %d", firstNum, secondNum);  
		
		for(i=0;i<(j-2);i++){
			nextNum=firstNum+secondNum;
			firstNum=secondNum;
			secondNum=nextNum;
			
			printf(", %d", nextNum);
		}
	}
	
	else if(j<1){
		printf("Wrong value!Please enter a number bigger than one!");
		continue;
	}
	else break;
        
	}
	return 0;
}
