#include<stdio.h>

void sum_n_avg(double n1, double n2, double n3, double *sump, double *avgp){
	
	*sump=n1+n2+n3;
	*avgp=*sump/3;
	
}

int main(){
	
	double frstNum, scndNum, thrdNum, sum, avg;
	
	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &frstNum, &scndNum, &thrdNum);
	
	sum_n_avg(frstNum, scndNum, thrdNum, &sum, &avg);
	
	printf("Sum of these numbers: %.3lf\nAverage of these numbers: %.3lf", sum, avg);
	
	return(0);
}
