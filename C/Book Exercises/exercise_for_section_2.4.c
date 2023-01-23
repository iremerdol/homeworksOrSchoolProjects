/*
* Calculate and display the difference of two input values
*/
#include <stdio.h>
int main(void) 
{
   int X, /* first input value */ x, /* second
input value */
   sum; /* sum of inputs */
   scanf("%d%d", &X, &x); 
   sum = X + x;
   printf("%d + %d = %d\n", X, x, sum); 
   
   return (0);
}
