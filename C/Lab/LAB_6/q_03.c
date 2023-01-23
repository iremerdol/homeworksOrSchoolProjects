#include<stdio.h>
#include<math.h>

int main(){
	
	int num, sum, digit, i=1;
	
	while(1){
		printf("Enter a positive integer (non positive to exit): ");
	    scanf("%d", &num);
	    if(num<0){
	    	return 0;
		}
	while(num>9){
			digit = 0;
			sum = 0;
			while(num>=i){	
			digit = num % 10;
			num = num / 10;
			sum = sum + digit;
			
		 }
	
	printf("Sum of digits = %d\n", sum);
	num = sum;
	
  }   
}
	return 0;
}
