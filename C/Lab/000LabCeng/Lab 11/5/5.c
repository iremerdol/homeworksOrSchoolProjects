#include <stdio.h>

int main() {

    FILE *grades, *average;
    int status;
	double numbers, sum_txt, sum_print, arr_average[10][2], arr_grades[10][6];
	
    grades = fopen("grades.txt", "r");
    average = fopen("average.txt", "w");
    
    //Txt to 2D array
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 6; j++)
        {
            fscanf(grades, "%lf", &numbers);
            arr_grades[i][j] = numbers;
        }
        
    }
    
/*
    //Print array for debug
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.1lf\t", arr_grades[i][j]);
        }
        printf("\n");
    }
*/

    //writing ID's and averages on average.txt
    for(int k = 0; k < 10; k++) {
    	sum_txt = 0;
        fprintf(average, "%.0lf ", arr_grades[k][0]); //this is for writing ID's

        for (int l = 1; l <= 5; l++) {
            sum_txt += arr_grades[k][l];
        }
        fprintf(average, "%.1lf\n", sum_txt / 5.0);
    }

	//output
    printf("Quiz Number\tAverage\n");
    for (int m = 1; m <= 5; m++)
    {   
        sum_print = 0;
        printf("   %d\t\t", m);
        for (int n = 0; n < 10; n++) {
            sum_print += arr_grades[n][m];
        }
        printf("%.2lf\n", sum_print / 10.0);
    }
    

    fclose(grades);
    fclose(average);

    return 0;
}
