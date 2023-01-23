#include<stdio.h>

int main(){
	
	float a[2][3]; 
	int r=0, c=0;
	
	for(r=0; r<2; r++)
	    for(c=0; c<3; c++)
	      scanf("%f", &a[r][c]);
	
	for(c=0; c<3; c++){
		for(r=0; r<2; r++)
		printf("%.1f\t", a[r][c]);
		
	printf("\n");	
	}      
	
}
