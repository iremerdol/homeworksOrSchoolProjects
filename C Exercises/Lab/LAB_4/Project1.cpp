#include <stdio.h>
#include <math.h>

int main()
{
	int price, engineCapacity;
	float sellingPrice;
	printf("Please enter engine capacity (in cc) : ");
	scanf("%d", &engineCapacity);
	printf("Please enter the base price: ");
	scanf("%d", &price);

	if (engineCapacity <= 1600)
		{
			if (price < 92000) 
				{
				sellingPrice = price * 1.45 * 1.18;
				printf("Selling price is %.0f TL", sellingPrice);
				}
			else if (price > 92000 && price < 150000)
				{
					sellingPrice = price * 1.50 * 1.18;
					printf("Selling price is %.0f TL", sellingPrice);
				}
			else if (price > 150000)
				{
					sellingPrice = price * 1.80 * 1.18;
					printf("Selling price is %.0f TL", sellingPrice);
				}
		}
	
	else if (engineCapacity > 1600)
		{
			if (price < 170000) 
			{
				sellingPrice = price * 2.30 * 1.18;
				printf("Selling price is %.0f TL", sellingPrice);
			}
			else if (price > 170000) 
			{
				sellingPrice = price * 2.50 * 1.18;
				printf("Selling price is %.0f TL", sellingPrice);
			}
		
		 } 
	
	
	return 0;
}
