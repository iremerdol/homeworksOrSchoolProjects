#include<stdio.h>
#include<string.h>

//prototype: int strcmp(const char* s1, const char* s2)
//compares two strings
/*returns value:
less than 0, if s1<s2
greater than 0, if s1>s2
equal to 0, if s1==s2*/
/* in ASCII character set
1- all the upper case letter less than all the lower case letters 
2- digits less than letters
3- spaces are less than all printing characters*/

//it checkes all characters until it is not equal
//also if all characters matches but one is shorter(lenght) so it is less than the other 
//example:
int main()
{
	char *s1="abcd";
	char *s2="abce";
	if(strcmp(s1, s2)<0)
	    printf("s1 is less than s2");
    else
        printf("s1 is greater than or equal to s2");
    return 0;    
}
