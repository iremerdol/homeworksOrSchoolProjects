#include<stdio.h>

int main(){
	int matrix[3][5];
	int i, j, sum;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
		scanf("%d", &matrix[i][j]);
	    }
	}
	
	for(j=0; j<5; j++){
		for(i=0; i<3; i++){
		sum+=matrix[i][j];
	    }
	    printf("%d ", sum);
	    sum=0;
	}
	
	
	return 0;
}
