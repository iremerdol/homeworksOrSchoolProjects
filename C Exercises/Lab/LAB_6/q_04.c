#include<stdio.h>

void drawSquare(void){
	int i, j;
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++)
		printf("+ ");
	    printf("\n");
	}	
}

int main(){
	printf("Heres my square: \n");
	drawSquare();
	
	return 0;
}
