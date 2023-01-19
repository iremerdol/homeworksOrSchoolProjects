#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("matrix.txt", "r");
    double numbers, arr[7][4], temp_arr[4];
    int cho1, cho2;
    
    //Txt to 2D array
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++)
        {
            fscanf(file, "%lf", &numbers);
            arr[i][j] = numbers;
        }
    }

    //Print array
    printf("The contents of the array is: \n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.1lf\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter two row indexes to swap: ");
    scanf("%d %d", &cho1, &cho2);
    while(cho1 < 0 || cho1 > 6 || cho2 < 0 || cho2 > 6) {
        printf("Enter two row indexes to swap: ");
        scanf("%d %d", &cho1, &cho2);
    }

    for (int i = 0; i < 4; i++) {
        temp_arr[i] = arr[cho1][i];
        arr[cho1][i] = arr[cho2][i];
        arr[cho2][i] = temp_arr[i];
    }

    printf("\nThe contents of the array AFTER the swap operation: \n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.1lf\t", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
