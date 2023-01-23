#include<stdio.h>

int main(){
	
	int table[3][5], col, row;
	
	for(col=0; col<5; col++)
	    for(row=0; row<3; row++)
	        scanf("%d", &table[row][col]);
	        
    for(row=0; row<3; row++){
	    for(col=0; col<5; col++)
	        printf("%d\t", table[row][col]); 
	   
	    printf("\n");    
    }
}
