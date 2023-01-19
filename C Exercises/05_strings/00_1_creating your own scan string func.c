#include<stdio.h>

//string input function (for just one line):
int input(char str[], int n)
{
	int ch, i=0;
	while((ch=getchar())!='\n')
	    if(i<n)
	        str[i++]=ch;
	str[i]='\0';
	return i;        
}
//end of string input function
/*don't forget getchar is a func which is a type of an -int- and 
it does work with ASCII codes of characters*/
//(int) putchar is working with ASCII codes too but --> char putchar(char n) is a correct syntax too
int main()
{
//the usage of out input func:	
	char str[100];
	int n = input(str, 100);
	printf("%d %s\n\n\n\n\n\n\n\n", n, str);

//putchar example:	
	int ch;
	for(ch='A'; ch<='Z'; ch++)
	    putchar(ch);
	return 0;
}
