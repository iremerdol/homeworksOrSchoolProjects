#include<stdio.h>

int main(){
	
	int a[5][5], r, c;
	
	for(r=0; r<5; r++)
	    for(c=0; c<5; c++)
	        if(c==r)
	          a[r][c]=1;
	        else
	          a[r][c]=0;

    for(r=0; r<5; r++){
    	for(c=0; c<5; c++)
    	printf("%d\t", a[r][c]);
    	
    	printf("\n");
	}

}
