#include<stdio.h>

int main(){
	
	int arr[3][5];
	int r, c, n=2;
	char choose;
	
	for(c=0; c<5;c++)
	    for(r=0; r<3; r++){
	    	arr[r][c]=n;
	        n+=2;
		}
	  	
	
		for(c=4; c>=0;c--){
		for(r=2; r>=0; r--)
		    printf("%d\t", arr[r][c]);
		
		printf("\n");  
	    }
	
    printf("\n\n");
     
		for(r=2; r>=0; r--){
		for(c=4; c>=0;c--)
		    printf("%d\t", arr[r][c]);
		
		printf("\n");  
	    }
	
    return 0;	
}
