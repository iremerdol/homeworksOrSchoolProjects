#include<stdio.h>

int main(){
	int n, fact=1;
	printf("Enter a number for the factorial process: ");
	scanf("%d", &n);
	
	while(n!=0){
		fact *= n;
		
		printf("%d ", n);
				n--;

	}
	
	printf("n!: %d", fact);
	
	return 0;
}
