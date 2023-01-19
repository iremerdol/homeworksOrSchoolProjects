#include<stdio.h>

int main(){
	
	int m, n, k, c, r, i=0, sum=0;
	
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	
	if(m != n)
	    printf("Multiplication isn't possible. Please enter equal numbers for n and m.");
	
	else{
		printf("Enter k: ");
	scanf("%d", &k);
	
	int a[m][n], b[n][k], p[m][k];
	
	for(r=0; r<m; r++)
		for(c=0; c<n; c++){
			i++;
			printf("Enter the %d. element of a: ", i);
			scanf("%d", &a[r][c]);	
		}   
	
	i=0;
	
	printf("\n");
	
	for(r=0; r<n; r++)
		for(c=0; c<k; c++){
			i++;
			printf("Enter the %d. element of b: ", i);
			scanf("%d", &b[r][c]);		
		}
	
	i=0;
	
	printf("\nThe product of these matrices:\n");
		
	for(r=0; r<m; r++){
		for(c=0; c<k; c++){
			p[r][c]=0;
			for(i=0; i<n; i++){
			p[r][c]	+= a[r][i]*b[i][c]; 
			}
		printf("%d\t", p[r][c]);
		}
		printf("\n");
	}
	
}
    return 0;	
}
