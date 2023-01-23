#include<stdio.h>
#include<stdlib.h>
#define CONST_PAY 250
#define EXT_PAY 12.5

double weekly_pay(int hours)
{	
	if(hours<=40)
	    return(CONST_PAY);
	else
	    return(CONST_PAY+(hours-40)*EXT_PAY);
}

int main()
{
	
  	FILE *infile, *outfile;
  	int id, hrs, status;
  	
  	infile=fopen("hours.txt", "r");
  	
  	if(infile==NULL)
  	    printf("Cannot open hours.txt for input!\n");
  	else{
  		outfile=fopen("pay.txt", "a");
  		status=fscanf(infile, "%d %d", &id, &hrs);
  		
  		while(status!=EOF){
  			fprintf(outfile, "%d %.2f\n", id, weekly_pay(hrs));
  			status=fscanf(infile, "%d %d", &id, &hrs);
		  }
	  fclose(infile);
	  fclose(outfile);
	  }
	printf("Check the file pay.txt!!!");   
	return(0);
}
