#include<stdio.h>

double maxar(double arr[], int size){
	
	double max;
	int k;
	
	max = arr[0];
	
	for(k=1; k<size; k++){
		if(arr[k]>max) max = arr[k];
	}
	
	return (max);
}

int main(){	
	double ages[]={34, 45, 61, 18, 25};
	int maximum;
	
	maximum = maxar(ages, 5);
	
	printf("%d", maximum);
	
	return 0;
}
