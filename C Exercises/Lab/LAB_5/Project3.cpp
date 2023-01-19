#include <stdio.h>
#include <stdlib.h>

int main() {
	int sec, sayi, x, z, i, k;
	for(;1;){
	printf("MENU\n-------\n1. Triangular?\n2. Prime?\n3. Exit\nEnter your choice: ");
	scanf("%d", &sec);
	for(sec;sec<1||3<sec;){
		printf("Wrong choice! Enter your choice again: ");
		scanf("%d", &sec);
	}
	switch(sec){
		case 1:
			printf("Enter a number: ");
			scanf("%d", &sayi);
			z=1;
			for(x=1;x<sayi;){
				z++;
				x+=z;	
			}
				if(sayi%x==0){
					printf("%d is a triangular number\n\n", sayi);
				}
				else{
					printf("%d  is NOT triangular number\n\n", sayi);
				}
			break;
		case 2:
			printf("Enter a number: ");
			scanf("%d", &sayi);
			k=0;
			for(i=2;i<=sayi/2;i++){
				if(sayi%i==0){
					k=1;
				}
			}
			if(k==1 || sayi==1){
				printf("%d is NOT a prime number\n\n",sayi);
			}
				else{
				printf("%d  is a prime number\n\n",sayi);
			}
			break;
		case 3:
			return 0;
	}
}
}
