#include <stdio.h>

//trash solution change it later
void avg_row(double arr_2D[][10], double *arr1_1D) {

    for (int i = 1; i < 8; i++) {
        double sum = 0;
        for (int j = 0; j < 10; j++) {
            sum += arr_2D[i][j];
        }
        arr1_1D[i-1] = sum / 10.0;
    }
    
}

void avg_clmn(double arr_2D[][10], double *arr2_1D) {

    for (int i = 0; i < 10; i++) {
        double sum = 0;
        for (int j = 1; j < 8; j++) {
            sum += arr_2D[j][i];
        }
        arr2_1D[i] = sum / 7.0;
    }
}

int main() {
    FILE* grade;
    grade = fopen("grades6.txt", "r");
    double numbers, choice, arr_grades[8][10], arr_avg1[10]={0}, arr_avg2[7]={0};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            fscanf(grade, "%lf", &numbers);
            arr_grades[i][j] = numbers;
        }
    }
    avg_clmn(arr_grades, &arr_avg1);

    printf("STUDENT ID\tQUIZ AVERAGE\n");
    for (int m = 0; m < 10; m++) {   
        printf("   %.0lf\t\t", arr_grades[0][m]);
        printf("%.2lf\n", arr_avg1[m]);
    }

    avg_row(arr_grades, &arr_avg2);

    printf("\nQUIZ NUMBER\tAVERAGE\n");
    for (int m = 0; m < 7; m++) {   
        printf("   %d\t\t", m+1);
        printf("%.2lf\n", arr_avg2[m]);
    }

    printf("\nEnter a grade: ");
    scanf("%lf", &choice);
    printf("The students who are above %.2lf are: \n", choice);

    for (int m = 0; m < 10; m++) {   
        if (arr_avg1[m] > choice) {
            printf("%.0lf\n", arr_grades[0][m]);
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
    return 0;
}
