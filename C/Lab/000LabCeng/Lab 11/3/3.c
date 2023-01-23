#include <stdio.h>

int main() {

    int arr[3][3] = {0};

    //Major Diagonal
    for (int i = 0; i < 3; i++) {
        arr[i][i] = 1;
    }
    
    //Print the Major
    printf("MAJOR DIAGONAL\n");
    for(int j = 0; j < 3; j++) {
    	for(int k = 0; k < 3; k++) {
    		printf("%d ", arr[j][k]);
		}
		printf("\n");
	}
    //Minor Diagonal
    for (int row = 2, clmn = 0; row > 0, clmn < 3; row--, clmn++) {
        arr[row][clmn] = 1;
    }
	
	//Print Major and Minor
	printf("\nMAJOR AND MINOR DIAGONAL\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
