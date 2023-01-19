#include <stdio.h>
#include <math.h>
int main()
{
int flag = 1;
int n,k;
double x;

    do
    {
    printf("Enter the positive number of terms :");
    scanf("%d", &n);
if(n>0)
flag = 0;
else if(n<=0)
    printf("Wrong!!!! Try again\n");
}
    while(flag);
    
    printf(" :Enter a value for x ");
    scanf("%lf", &x);
    
double sum=0.0;
int sign=1;
int power=1;
int divide=2;
double add=0.1,temp;

for(k=1;k<=n;k++)
{
	
	temp=pow((x+add),power)/divide;
	sum+=sign*temp;
	sign=sign*-1;
	divide+=2;
	power+=2;
	add+=0.1;
}
    printf("solution is : %.2lf",sum);
    
    
    return 0;
}
