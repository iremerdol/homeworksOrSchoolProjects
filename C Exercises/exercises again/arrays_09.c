#include<stdio.h>

int isDivisible(int m, int n){
	
	if(m%n==0)
	    return (1);
	    
    else
        return (0);
}

//arraydeki kaç eleman herhangi bir sayıya bölünebilir
int count_div(int arr[], int size, int num){
	
	int count, k;
	
	count=0;
	for(k=0; k<size; k++)
	    if(isDivisible(arr[k], num))
	        count++;
	return(count);        
}

int main(){
	
	int x, y, ages[]={34, 45, 61, 18, 25};
	
	y = isDivisible(11, 3);
	x = count_div(ages, 5, 3);
	
	printf("%d, %d", y, x);
	
	return 0;
}
