#include<stdio.h>

int main(){
	
	double a[2][3], v[1][3], av[2][3];
	int c, r;
	
	for(r=0; r<2; r++)
	    for (c=0; c<3; c++)
	        scanf("%lf", &a[r][c]);
	        
	for(r=0; r<1; r++)
	    for (c=0; c<3; c++)
	        scanf("%lf", &v[r][c]);
	
			
	for(r=0; r<2; r++){
		for(c=0; c<3; c++){
			
			av[r][c]=a[r][c] * v[0][c];
			
            printf("%.1lf\t", av[r][c]);
			
		}
		  
		  printf("\n");  		    
	}		   
	
	
}
