#include<stdio.h>
/*kullaným öðretisi*/
int main(){
	
	int m = 25;
    int *itemp;
    
    itemp=&m;
    
    printf("%d", *itemp);
    
    *itemp=35;
    
    printf("\n%d", *itemp);
    *itemp=2*(*itemp);
    
    printf("\n%d", *itemp);
	
}
