#include<stdio.h>
#include<stdlib.h>

int main(){
	float numbers[5], sum=0; 
	int i=0;
	
	for(i=0; i<5; i++){
		
		printf("Enter a number: ");
		scanf("%f", &numbers[i]);
	}
	
	for(i=0; i<5; i++){
		sum += numbers[i];
	}
	
	sum=sum/5;
	
	printf("Average of those numbers is %.2f", sum);

}

