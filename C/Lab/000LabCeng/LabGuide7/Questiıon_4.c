#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int demicalValue(int base, int number){
	int x, k=0, a, b;
	
	a= number;
	b= 0;

	while(1){
		x=a%10;
		if(x>0){
			k+=x*pow(base,b);
		}
		a/=10;
		b++;
		if(a==0){
			break;
		}
	}
	
	printf("Demical value of the number %d in base %d is %d.", number, base, k);
	return 0;	
}

int main(){
	int base, number;
	
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the number: ");
	scanf("%d", &number);
	demicalValue(base, number);
	
	
	return 0;
}
