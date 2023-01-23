#include<stdio.h>
#include<string.h>

/*strcat functiýn APPENDS the content of string str2 at the en of the string str1
it returns the pointer to the resulting string str1*/
//prototype: char* strcat(char* str1, const char* str2)
//prototype: char* strncat(char* str1, const char* str2, n)
//strncat function adds NULL to the end of the string automatically

int main()
{
//strcat example:	
	char str1[100], str2[100];
	strcpy(str1, "Welcome to ");
	strcpy(str2, "our Academy");
	strcat(str1, str2);
	printf("%s\n\n\n", str1);
	
//strncat example:	
    char str3[5], str4[100];
    strcpy(str3, "He");
	strcpy(str4, "llo!");
	strncat(str3, str4, sizeof(str3)- strlen(str3) -1);
	/*sizeof(str3) is the size of array, strlen is the lenght of str3 before the appendation, 
	and 1 is for NULL*/
	printf("%s", str3);
    
	return 0;
}
