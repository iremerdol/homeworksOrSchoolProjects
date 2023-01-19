#include<stdio.h>
#include<string.h>

//prototype: size_t strlen(const char* str)
//this function is calculating the lenght of the string NOT THE WHOLE ARRAY
int main()
{
	char *str="Hello world";
	printf("%d", strlen(str));
	return 0;
}
