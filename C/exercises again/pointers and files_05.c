#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void separate(double num, char *signp, int *wholep, double *fracp){
	
	double magnitude;
	
	if(num<0)
	    *signp= '-';
	else if(num==0)
	    *signp= ' ';
	else
	    *signp= '+';
	
	magnitude=fabs(num);
	*wholep=floor(magnitude);
	*fracp=magnitude - *wholep;    
	
}

int main(){
	
	double value, c;
	char a;
	int b;

	
	scanf("%lf", &value);
	separate(value, &a, &b, &c);
	
	printf("%c\t%d\t%lf\t", a, b, c);
	
}



