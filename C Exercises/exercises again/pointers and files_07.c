#include<stdio.h>

void order(double *smlrp, double *lrgrp){
	
	if(*smlrp>*lrgrp){
		*smlrp-=*lrgrp;
		*lrgrp+=*smlrp;
		*smlrp=*lrgrp-*smlrp;
	}
	
	else;
}

int main(){
	
	double num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%lf%lf%lf", &num1, &num2, &num3);
	
	order(&num3, &num2);
	order(&num2, &num1); /*computing order is important too! be careful!!!*/
	order(&num3, &num2); /*(in this situation we ordered the nums from greater to smaller)*/
	
	
	printf("%.2lf\t%.2lf\t%.2lf\t", num1, num2, num3);
	
	return(0);
}
