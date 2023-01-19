#include<stdio.h>


int main(){
	int credit, t, x, year;
	
	while(1){

		printf("Enter the student ID(-1 to exit): ");
		scanf("%d", &t);
		
		if(t==-1){
			return 0;
		}
		
		printf("Enter the credit: ");
		scanf("%d", &credit);
		printf("Enter year: ");
		scanf("%d", &year);
		
	    if(credit<=12 && year<4){
	    	x =	credit*525;  	
		}
		
		else{
			credit -= 12;
			x = (credit*750)+4500;
		}
		
		if(year==4){
			x *= 0.85;
		}
		
		printf("Student with ID %d will pay tuition %d$\n\n", t, x);
	
	  }
	
	return 0;
}
