#include<stdio.h>
#include<math.h>

int main(){
	FILE *f=fopen("bill.txt", "r");
	double arr[10][12];
	double sum=0, sum2=0, dev, avg, num;
	
	for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 12; j++) {
            fscanf(f, "%lf", &num);
            arr[i][j] = num;
        }
    }
    for (int i = 0; i < 10; i++) {
    	sum = 0;
    	sum2=0;
        for (int j = 0; j < 12; j++) {
            printf("%.2lf\t", arr[i][j]);
            sum += arr[i][j];
        }
    
        avg = sum / 12.0;
        printf("%.1lf\t", avg);
        
		for (int j = 0; j < 12; j++) {
        	sum2+=pow(arr[i][j]-avg, 2) ; 
        }
        dev = sqrt(sum2/  12.0);
        
        printf("%.1lf", dev);
                                         
        printf("\n");
    }
	
	
	
	return 0;
	
}
