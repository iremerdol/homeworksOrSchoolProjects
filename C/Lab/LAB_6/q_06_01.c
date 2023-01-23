#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){
	int i;
	printf("         MENU         \n");
	for(i=1; i<23; i++){
		printf("-");
	}
    printf("\n1. Right Triange\n2. Isoscles Triangle\n3. Exit");
}

int ranndomNumber(){
	srand(time(NULL));
	int x=3+rand()%6;
	printf("Random number is %d\n", x);
	return x;
}

int main(){
	
	int choice, x, a, b, c, d;
		
	while(1){
		menu();
		printf("Enter your choice: ");
	    scanf("%d", &choice);
		
		if(choice = 1){
			x=randomNumber();
			a=1;
			for(a;a<=x;a++){
				c=x-a;
				for(c;c>0;c--){
					printf(" ");
				}
				b=a;
				for(b;b>=1;b--){
					printf("%d", b);
				}
				printf("\n");
			}
			break;		
		}
		if(choice = 2){
			x=randomNumber();
			a=1;
			for(a;a<=x;a++){
				c=x-a;
				for(c;c>0;c--){
					printf(" ");
				}
				b=a;
				for(b;b>=1;b--){
					printf("%d", b);
				}
				d=2;
				for(d;d<=a;d++){
					printf("%d", d);
				}
				printf("\n");
			}
			break;
		}
		if(choice = 3){
			return 0;
		}
	}
	
	return 0;
}
