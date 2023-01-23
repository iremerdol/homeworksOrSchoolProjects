#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int var1=3, //integer variables
var2=5,
*pVar; //pointer to integer memory area

pVar = &var1; //store the address of var1 into pVar pointer
printf("\nContent of pointer = %p\n", pVar);
printf("Content of the memory area referred by pointer = %d\n", *pVar);

*pVar = *pVar * 2; //double the content of the memory area
//that is pointed by pVar

printf("\nContent of pointer = %p\n", pVar);
printf("Content of the memory area referred by pointer = %d\n", *pVar);
pVar = &var2; //store the address of var2 into pVar pointer

printf("\nContent of pointer = %p\n", pVar);
printf("Content of the memory area referred by pointer = %d\n", *pVar);

return (0);
}
