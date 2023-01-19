#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[25];
	FILE *fp;
	fp = fopen("numbers.txt", "r");
	if(fp==NULL) printf("Error");
	else{
		for(int i=0;i<25;i++){
			fscanf(fp, "%d", &a[i]);
			if(a[i]%2==0)printf("%d ", a[i]);
		}
	}
	return 0;
}
