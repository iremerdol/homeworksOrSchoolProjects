#include<stdio.h>
#define MAX 100 
typedef struct
{
	int midterm, labexam, final;
}grades;

typedef struct
{
	int id;
	grades gr;		/*nested structure*/
	double overall;
}student152;

int input(student152 st[])
{	
	int	i=0, status;
	FILE *inp=fopen("student.txt","r");
	if (inp==NULL)	
		printf("The file con not be opened!!!");
	else
	{
		status=fscanf(inp,"%d %d %d %d",&(*(st+i)).id,&(*(st+i)).gr.midterm,&(*(st+i)).gr.labexam,&(*(st+i)).gr.final);
	
		while(status!=EOF) 
		{
			(*(st+i)).overall = 0.0; 
			i++;
			status=fscanf(inp,"%d %d %d %d",&(*(st+i)).id,&(*(st+i)).gr.midterm,&(*(st+i)).gr.labexam,&(*(st+i)).gr.final);
		}
	}
	fclose(inp);
	return(i);
}
double calculate(student152 st[], int size)
{
	int	 i;
	double	sum=0,	avg;
	for(i=0; i<size; i++)
	{
		(*(st+i)).overall = ((*(st+i)).gr.midterm * 0.3) + ((*(st+i)).gr.labexam * 0.3) + ((*(st+i)).gr.final * 0.4);
		sum = sum +(*(st+i)).overall;
	}
	avg = sum / size;
	return(avg);
}
void display(student152 st[],int size)
{	
	int	i;
	for(i=0; i<size; i++)
	{
		printf("\n");
		printf("\nstudent id      : %d ", (*(st+i)).id);
		printf("\nstudent Midterm : %d ", (*(st+i)).gr.midterm);
		printf("\nstudent Lab Exam: %d ", (*(st+i)).gr.labexam);
		printf("\nstudent Final   : %d ", (*(st+i)).gr.final);
		printf("\nstudent Overall : %.1f ",(*(st+i)).overall);
	}
}
void find_fail_pass(student152 st[],int size,double avg)
{	
	int	i,pass = 0,	fail = 0;
	for(i=0; i<size;i++)
	{	
		if((*(st+i)).overall>=avg)	
			pass = pass + 1;
		else 
			fail = fail + 1;
	}
	printf("\nAverage is %.1f",avg);
	printf("\nNumber of the students who pass is %d", pass);
	printf("\nNumber of the students who faill is %d", fail);
}
int main(void)
{	
	student152	st[MAX];
	int	numstu = 0;
	double avg;
	numstu = input(st);
	avg = calculate(st,numstu);
	display(st,numstu);
	find_fail_pass(st,numstu,avg);
	return(0);
}
