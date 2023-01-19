#include<stdio.h>
#define COL_SIZE 3
#define MAX_STD 100

double table_max(double table[][COL_SIZE], int row_size){
	
	double max;
	int r, c;
	
	max=table[0][0];
	
	for(r=0; r<row_size; r++)
	    for(c=0; c<3; c++)
	        if(table[r][c]>max)
	            max=table[r][c];
	
	return(max); 
}

int cnt_num(double table[][COL_SIZE], int row_size, double num){
	
	int cnt, c, r;
	cnt=0;
	for(r=0; r<row_size; r++)
	    for(c=0; c<COL_SIZE; c++)
	        if(table[r][c]==num)
	            cnt++;
	
	return(cnt);
}

int main(){
	
	double grd[MAX_STD][COL_SIZE], max_grd; 
	FILE *inp;
	int status, cnt_grd, num_std;
	inp=fopen("grades.txt", "r");
	
	if(inp==NULL)
	    printf("Cannot open grades.txt for input!\n");
	
	else{
		num_std=0;
		status=fscanf(inp, "%lf %lf %lf", &grd[num_std][0], &grd[num_std][1], &grd[num_std][2]);
		while(status!=EOF){
			num_std++;
			status=fscanf(inp, "%lf %lf %lf", &grd[num_std][0], &grd[num_std][1], &grd[num_std][2]);
		}
		if(num_std==0)
		    printf("No valid grades are entered!\n");
		else{
			max_grd=table_max(grd, num_std);
			cnt_grd=cnt_num(grd, num_std, max_grd);
			printf("Maximum grade is %5.2lf\n", max_grd);
			printf("This grade is given %d times during the semester.\n", cnt_grd);
		}
		fclose(inp);    
	}    
	return(0);
}

