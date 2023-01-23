//string library an the functions in it
#include<stdio.h>
#include<string.h>

//prototype: char* strcpy(char* destination, const char* source)
//prototype: char* strncpy(char* destination, const char* source, int sizeof(destination))

//example:
int main()
{
	char str1[10]="Hello";
	char str2[10];
	char str3[10];
	
	printf("%s\n", strcpy(str2, str1));
	printf("%s\n\n\n", str2);
	
//we can use strcpy in strcpy:	
	strcpy(str3, strcpy(str2, str1));
	printf("%s\n\n\n", str3);
	
/*but strcpy is dangerous because it dc the size (program may crash)
so it's safer to use strncpy(which we control the size) */
    char str4[]="Hello";
    char str5[4];
    strncpy(str5, str4, sizeof(str5));
    printf("%s\n\n\n", str5);

/*strncpy does not place a NULL to the destination string 
we should manually add it to the end of that string*/
    char str6[]="Hello";
	char str7[10];
	strncpy(str7, str6, sizeof(str7));
	str7[sizeof(str6)-1]='\0';
	printf("%s", str7);  
	
	return 0;
}
