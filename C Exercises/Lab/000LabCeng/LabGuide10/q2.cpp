#include <stdio.h>
#include <stdlib.h>

int search(int x){
	FILE *fp;
	int a[100], i=0;
	 if ((fp=fopen("workyears.txt", "r"))==NULL) return 0;
	 while(!feof(fp)){
        fscanf(fp, "%d", &a[i]);
        i++;
    }
    for(int j=0;j<i;j++){
    	if(x==a[j]) return j;
	}
    fclose(fp);
    return -1;
}
int main() {
	FILE *fp;
	int a[100], i=0, x;
    if ((fp=fopen("employee_id.txt", "r"))==NULL) return 0;
    while(!feof(fp)){
        fscanf(fp, "%d", &a[i]);
        i++;
    }
    printf("Enter the year which you want to search: ");
    scanf("%d", &x);
    printf("First employe id who has worked for %d years is %d", x, a[search(x)]);
    fclose(fp);
    return 0;
}
