#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayi(){
	srand(time(NULL));
	int x=3+rand()%6;
	printf("Random number is %d\n", x);
	return x;
}
int main() {
	int k, x, a, b, c, d;
	while(1){
	
	printf("	MENU\n----------------------\n1. Right Triangle\n2. Isosoeles Triangele\n3. Exit\nEnter your choice: ");
	scanf("%d", &k);
	
	switch(k){
		case 1:
			x=sayi();
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
		case 2:
			x=sayi();
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
		case 3:
			return 0;
			break;
	    } 
	}
	return 0;
}
