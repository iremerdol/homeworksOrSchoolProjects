#include<stdio.h>
#include<math.h>

void duration(int mins, int *dayp, int *hourp, int *minp){
	
	*dayp=floor(mins/(60*24));
	*hourp=floor((mins-(*dayp * 24 * 60))/60);
	*minp=mins-(*hourp * 60) -(*dayp * 24 * 60);
	
}

int main(){
	
	int durMin, day, hour, min;
	
	printf("Enter a duration in minutes (negative value to quit): ");
	scanf("%d", &durMin);
	
	while(durMin>=0){
		duration(durMin, &day, &hour, &min);
		
		printf("%d min(s) = %d day(s) + %d hour(s) + %d min(s)\n", durMin, day, hour, min);
		
		printf("Enter a duration in minutes (negative value to quit): ");
	    scanf("%d", &durMin);
	}
	
	return (0);
}
