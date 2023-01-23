#include <stdio.h>
#include <math.h>

int main()
{
	int productNumber, amount;
	float totalPrice, discount;
	char member,memberType;
	
	printf("**************************************\n     WELCOME TO CENG113 MARKET\n**************************************\n");
	printf("List Of Products      Price\nProduct 1             2.98\nProduct 2             4.50\nProduct 3             9.98\nProduct 4             4.49\nProduct 5             6.87\n**************************************\n");
	printf("Type of Cards         Discount\nStudent               %%20\nLecturer              %%10\nGuest                 %%5\n");
	printf("**************************************\n             START BUYING\n**************************************\n");
	
	printf("Enter the product that you want to buy: (1-2-3-4-5): ");
	scanf("%d", &productNumber);
	printf("Enter the amount: ");
	scanf("%d", &amount);
	printf("Do you have membership Card (Y/N): ");
	scanf(" %c", &member);
	printf("%c", member);

	
	switch(member)
	{
		case 'Y':{
		
			printf("What is your membership type(S/L/G): ");
			scanf(" %c", &memberType);
	
		switch(memberType)
		{
			case 'S': discount = 0.8;			
					  printf("%lf   ",discount);
					  break;
			case 'L': discount = 0.9;					
					break;
			case 'G': discount = 0.95;					
					break;
		}
			
		}
		case 'N': discount = 1.0;			
                
					
	}
	switch(productNumber)
	{
		case 1: printf("Total: %.2lf", 2.98*amount*discount);
				break;
		case 2: printf("Total: %.2lf", 4.50*amount*discount);
				break;
		case 3: printf("Total: %.2lf", 9.98*amount*discount);
				break;
		case 4: printf("Total: %.2lf", 4.49*amount*discount);
				break;
		case 5: printf("Total: %.2lf", 6.87*amount*discount);
		
		
	}
	
	return 0;
}
