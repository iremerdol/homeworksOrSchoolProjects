#include <stdio.h>

int main() {

    int arr[3][5], k = 2;

	//Declaring
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            arr[j][i] = k;
            k += 2;
        }
    }
    
    //Example Run A
    for (int i = 4; i >= 0; i--) {
    	for (int j = 2; j >= 0; j--) {
            	printf("%d ", arr[j][i]);
        }
        printf("\n");	
    } 
    
    printf("\n");
    printf("\n");
    
	//Example Run B
    for (int i = 2; i >= 0; i--) {
    	for (int j = 4; j >= 0; j--) {
            	printf("%d ", arr[i][j]);
        }
        printf("\n");	
    }   
    return 0;
}