#include<stdio.h>
#include<math.h>

int main()
{
	int a = 5, b = 5, c = 10, result, x, y, z, t, k, n;
	x = (a == b) && (c > b);
	y = (a == b) && (c < b);
	z = (a == b) || (c < b);
	t = (a != b) || (c < b);
	k = !(a != b);
	n = !(a == b);
	
	printf("(a == b) && (c > b) is %d\n", x);
	printf("(a == b) && (c < b) is %d\n", y);
	printf("(a == b) || (c < b) is %d\n", z);
	printf("(a != b) || (c < b) is %d\n", t);
	printf("!(a != b) is %d\n", k);
	printf("!(a == b) is %d\n", n);
	
	return(0);
}
