#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int arr[3][5], r, c;
	
	printf("Enter the elements of array: ");
	
	for(r=0; r<3; r++){
		for(c=0; c<5; c++){
			scanf("%d", &arr[r][c]);
		}
	}
	
	char x='F';
	
	while(x!=0){
		
		printf("Choose the way it looks \n");
	    printf("(A/B)(0 to quit) : ");
	    scanf("%c", &x);
	    
	    if(x=='A'){
	    	
	    	for(c=4; c>=0; c--){
	    		for(r=2; r>=0; r--)
	    		printf("%d\t", arr[c][r]);
	    		
	    		printf("\n");
			}
		}
		
		else{
			
			for(r=2; r>=0; r--){
	    		for(c=4; c>=0; c--)
	    		printf("%d\t", arr[r][c]);
	    		
	    		printf("\n");
			}
			
		}
		
	}
	
	return(0);
	
	
}
