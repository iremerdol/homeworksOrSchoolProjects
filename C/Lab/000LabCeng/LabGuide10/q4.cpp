#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *fp;
	int size = 0, m, i, check=1, index=0;
	
	char ch;
	char acrostic[500];
	
	fp = fopen("text.txt", "r");
	m = fscanf(fp, "%c", &ch);
	
	while(m!= EOF){
	
	if (check){
		acrostic[index] = ch;
		index++;
		check=0;
	}
	
	else if(ch == '\n'){
		check = 1;
	}
	
	m= fscanf(fp, "%c", &ch);
    }
    
    
	for(i=0; i<index; i++){
    	printf("%c\n", acrostic[i]);
	}
	
	return 0;
}
