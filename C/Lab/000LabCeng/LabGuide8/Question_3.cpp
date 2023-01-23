#include <stdio.h>
int isUpper(char);
int isDigit(char);
int isLower(char);

int main(){
	
	FILE *ptr;
	ptr = fopen("text.txt","r");
	
	char letter;
	int upper,lower,digit,nondigit,linenum=0;
	while(!feof(ptr)){
		linenum++;
		
	while((letter = getc(ptr)) != '\n'){
	
	if(isUpper(letter))
		upper++;
	else if(isLower(letter))
		lower++;
	else if(isDigit(letter))
		digit++;
	}
	printf("%d.line contains:\nUP:%d LOW:%d DIGIT:%d\n\n",linenum, upper,lower,digit);
	upper = 0,lower = 0,digit = 0;
}
}	

int isUpper(char letter){
	if(letter>='A' && letter <= 'Z')
		return(1);
	else
		return(0); 
}

int isLower(char letter){
if(letter>='a' && letter <= 'z')
		return(1);
	else
		return(0); 
}

int isDigit(char letter){
	if(letter>='0' && letter <= '9')
		return(1);
	else
		return(0); 
}

