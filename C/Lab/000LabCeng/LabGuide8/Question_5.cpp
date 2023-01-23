#include<stdio.h>

int main(){
	
	FILE *fp;
	FILE *fp2;
	int a=0;
	char c[10];
	if((fp=fopen("teachers.txt", "r+"))==NULL||(fp2=fopen("phone.txt", "r"))==NULL)
        printf("Error.");
	else{
		while(!feof(fp)){
			fscanf(fp, "%s", &c);
			a++;
		}
		fprintf(fp, "\n\n");
		for(int i=0; i<a; i++){
			fscanf(fp2, "%s", &c);
			fprintf(fp, "%s\n", c);
		}
		printf("The number of teachers in the file is: %d\nThe phones appended to the teachers.txt file.", a);
		fclose(fp);
		fclose(fp2);
	}	  	
	return 0;
}

