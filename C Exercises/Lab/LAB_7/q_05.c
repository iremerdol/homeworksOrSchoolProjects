#include <stdio.h>
#include <stdlib.h>

int drawTriangle(){
	int x, a, b;
	x=1;
	for(x;x<=4;x++){
		a=5-x;
		for(a;a>0;a--){
			printf(" ");
		}
		printf("%d", x);
		b=2*(x-1)-1;
		for(b;b<=5&&b>=1;b--){
			printf(" ");
		}
		if(x>=2){
			printf("%d", x);
		}
		printf("\n");
	}
	x=5;
	for(x;x>=1;x--){
		printf("%d", x);
	}
	x=2;
	for(x;x<=5;x++){
		printf("%d", x);
	}
}
int drawRhombus(){
	int x, a, b;
	x=1;
	for(x;x<=5;x++){
		a=5-x;
		for(a;a>0;a--){
			printf(" ");
		}
		printf("%d", x);
		b=2*(x-1)-2;
		for(b;b<=7&&b>=0;b--){
			printf(" ");
		}
		if(x>=2){
			printf("%d", x);
		}
		printf("\n");
	}
	for(x;x<=9;x++){
		a=x-5;
		for(a;a>0;a--){
			printf(" ");
		}
		printf("%d", x);
		b=2*(9-x)-2;
		for(b;b<=7&&b>=0;b--){
			printf(" ");
		}
		if(x<=8){
			printf("%d", x);
		}
		printf("\n");
	}
	
}
int main() {
	int k;
	while(1){
		printf("MENU\n1. Draw a triangle\n2. Draw a rhombus\n3. Exit\n\nEnter your choice: ");
		scanf("%d", &k);
		switch(k){
			case 1:
				drawTriangle();
				printf("\n\n");
				break;
			case 2:
				drawRhombus();
				printf("\n\n");
				break;
			case 3:
				return 0;
		}
	}
}
