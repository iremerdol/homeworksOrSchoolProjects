#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f = fopen("q1.txt", "r");
	int num, arr[5][5], ar1[5], ar2[5];
	int sum=0, sum2=0, sum3=0, col=0, row=0, choice;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			fscanf(f, "%d", &num);
			arr[i][j]=num;
		}
	}
	
	while(choice!=7){
		
		int j=0;
		
		printf("1. Matrix\n");
		printf("2. Sum of the minor diagonal\n");
		printf("3. Average of the major diagonal\n");
		printf("4. Maximum of the given column\n");
		printf("5. Minimum of the given row\n");
		printf("6. Sum and average of the matrix\n");
		printf("7. Exit\n");
		
		printf("Enter your choice: ");

		scanf("%d", &choice);
		
		switch(choice) {
			
			case 1:
			for(int i=0; i<5; i++){
				for(int j=0; j<5; j++){
					printf("%d\t", arr[i][j]);
				}
			    printf("\n");
				}
			printf("\n");	
			break;
			
			case 2:
			for(int i=4; i>=0; i--){
		    	sum+=arr[i][j];
				j++;				
			}
			printf("answer is %d\n\n", sum);
			break;
			
			case 3:
		    for(int i=0; i<5; i++){
		    	sum2+=arr[i][i];
			}
			printf("answer is %.2lf\n\n", sum2/5.0);
			break;
			
			case 4:
		    printf("Please enter the column from which you want the maximum element: ");
		    scanf("%d", &col);
		    for(int i=0; i<5; i++){
		    	ar1[i]=arr[i][col];
			}
			for(int i=1; i<5; ++i){
				if(ar1[0]<ar1[i]){
					ar1[0]=ar1[i];
				}	
			}
			printf("answer is %d\n\n", ar1[0]);
			break;
			
			case 5:
			printf("Please enter the row from which you want the minimum element: ");
			scanf("%d", &row);
		    for(int i=0; i<5; i++){
		        	ar2[i]=arr[row][i];
			}
			for(int i=1; i<5; ++i){
				if(ar2[0]>ar2[i]){
					ar2[0]=ar2[i];
				}	
			}
			printf("answer is %d\n\n", ar2[0]);
			break;
			
			case 6:
		    for(int i=0; i<5; i++){
		    	for(int j=0; j<5; j++){
		    		sum3+=arr[i][j];
				}
			}
			printf("summation is %d\n", sum3);
            printf("avarage is %.2lf\n\n", sum3 / 25.0);
            break;
                
            case 7:
            exit(0);
            break;   				
		}
	}
	
	fclose(f);
	
	return(0);
}
