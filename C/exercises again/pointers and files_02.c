#include<stdio.h>

int main(){
	
	FILE *inp;
	FILE *outp;
	double item;
	
	inp=fopen("distance.txt", "r");
	outp=fopen("distout.txt", "w");
	
	fscanf(inp, "%lf", &item);
	fprintf(outp, "%.2f\n", item);
	
	fclose(inp);
	fclose(outp);
	
	printf("Check out the file distout.txt!!!");
}
