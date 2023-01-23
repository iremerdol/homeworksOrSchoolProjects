#include<stdio.h>

int main(){
	
	int table[3][5], col, row;
	
	for(row=0; row<3; row++)
	    for(col=0; col<5; col++)
	        if(col%2==0)
	            table[row][col] = 1;
	        else
			    table[row][col] = 0;    

    for(row=0; row<3; row++){
	    for(col=0; col<5; col++)
	        printf("%d\t", table[row][col]); 
	   
	    printf("\n");    
    }

}
