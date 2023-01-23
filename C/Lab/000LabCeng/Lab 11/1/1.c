#include <stdio.h>

int main() {

    int arr[3][5] = {{2, 12, 1, 3, 65}, {45, 7, 11, 66, 98}, {8, 22, 48, 18, 5}};

    for (int i = 4; i >= 0; i--) {
    	
    	if (i % 2 == 0) {  //If column number is even print the values reversely (down to up)
        	for (int j = 2; j >= 0; j--) {
            	printf("%d ", arr[j][i]);
        	}
    	}   
		else {          //If column number is odd print the values up to down
    		for (int j = 0; j < 3; j++) {
            	printf("%d ", arr[j][i]);
			}
		}
	}
    return 0;
}