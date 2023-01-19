#include<stdio.h>

int main(){
	
	double grade;
	int std;
	FILE *grade_file;
	
	grade_file = fopen("grades.txt", "r");
	
	if(grade_file==NULL) printf("Cannot open grades.txt for input!\n");
	else{
		printf("OVERALL GRADE    LETTER GRADE\n");
		for(std=1; std<36; std++){
			fscanf(grade_file, "%lf", &grade);
			printf("%9.2f         ", grade);
	
	if(grade>=90)
	    printf("A\n");
	else if(grade>=80)
	    printf("B\n");
	else if(grade>=70)
	    printf("C\n");
	else if(grade>=60)
	    printf("D\n");
	else
	    printf("F\n");
       }
	fclose(grade_file); 
    }
	return 0;
}
