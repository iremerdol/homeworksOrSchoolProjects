#include<stdio.h>
#include<math.h>

int main(){
	int flag = 1, n, k;
	double x;
	
	do{
		printf("Enter the positive number of terms :");
		scanf("%d", &n);
	
	if (n > 0) flag = 0;
	else if (n <= 0) printf("Wrong!!! Try again.\n");	
	}
	
	while(flag);
	printf("Enter a value for x :");
	scanf("%lf", &x);
	
	double sum = 0.0, add = 0.1, temp;
	int sign = 1, power = 1, divide = 2;

	for(k = 1; k <= n; k++){
		temp = pow((x + add),power) / divide;
		sum += sign * temp;
		sign = sign * -1;
		divide += 2;
		power += 2;
		add += 0.1;
	}
	printf("Solution is : %.2lf", sum);
	
	return 0;
}
