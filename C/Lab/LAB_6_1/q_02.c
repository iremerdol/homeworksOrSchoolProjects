#include<stdio.h>

int main(){
	
	int i, j, x;
	
	while(1){
	
	printf("Enter an integer (<0 to stop): ");
	scanf("%d", &x);	
		
	if(x > 0){
		for(i=0; i<=x; ++i){
			for(j=0; j<=i; ++j){
				printf("%d", j);
			}
		printf("\n");	
		}
	}
	
	else{
	return 0;
   }
}
	return 0;
}
