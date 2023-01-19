#include<stdio.h>
#include<math.h>
int main(){
	int a = 5, b = 5, c = 10, x, y, z, t, n, k;
	
	x = (a == b) && (c > b);
	y = (a == b) && (c < b);
	z = (a == b) || (c < b);
	t = (a != b) || (c < b);
	n = !(a != b);
	k = !(a == b);
	
	printf("(a == b) && (c > b) is %d\n", x);
	printf("(a == b) && (c < b) is %d\n", y);
	printf("(a == b) || (c < b) is %d\n", z);
	printf("(a != b) || (c < b) is %d\n", t);
	printf("!(a != b) is %d\n", n);
	printf("!(a == b) is %d\n", k);
	
	return 0;
}
