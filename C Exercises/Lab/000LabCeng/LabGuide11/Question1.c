#include<stdio.h>

int main(){
	
	int arr[3][5]={{2,12,1,3,65}, {45,7,11,66,98}, {8,22,48,18,5}};
	int c, r;

    for(c=4; c>=0; c--){
    	
    	if(c%2==0){
    		for(r=2; r>=0; r--)
    		    printf("%d ", arr[r][c]);
		}
		
		else{
			for(r=0; r<3; r++)
			    printf("%d ", arr[r][c]);   
		}
	}	

	return 0;
}
