#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[25];
	FILE *fp;
	FILE *fp2;
	fp = fopen("numbers.txt", "r");
	fp2 = fopen("evens.txt", "w");
	if(fp==NULL) printf("Error");
	else{
		for(int i=0;i<25;i++){
			fscanf(fp, "%d", &a[i]);
			if(a[i]%2==0){
				fprintf(fp2, "%d ", a[i]);
			}
		}
	}
	return 0;
}
