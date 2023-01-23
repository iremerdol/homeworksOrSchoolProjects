#include<stdio.h>

int prime_or_not(int num){
	int i;
	for(i=2; i<num; i++){
		if(num%i == 0) return 0;
	}
	
	return 1;
	
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if(prime_or_not(n)==0){
		printf("This is not a prime number.");
	}
	else{
		printf("This is a prime number.");
	}
	
	return 0;
}
