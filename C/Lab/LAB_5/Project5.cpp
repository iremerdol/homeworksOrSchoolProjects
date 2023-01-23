#include <stdio.h>
#include <math.h>
 
int main()
{
    int sayi,tersi,i;
for(i;true;){

    printf("\nEnter a positive number: (0 to stop) ");
    scanf("%d",&sayi);
    if (sayi == 0){
    	return 0;
	}
	for(sayi; sayi< 0;){
		printf("Sorry! You didn't give a positive number!!!\n");
		break;
	}
    for(sayi; sayi>0;){	
        tersi = sayi % 10;
        sayi = sayi / 10;
        switch(tersi){
        	case 0: printf("ZERO  ");
        		break;
        	case 1: printf("ONE  ");
        		break;
        	case 2: printf("TWO  ");
        		break;
        	case 3: printf("THREE  ");
        		break;
        	case 4: printf("FOUR  ");
        		break;
        	case 5: printf("FIVE  ");
        		break;
        	case 6: printf("SIX  ");
        		break;
        	case 7: printf("SEVEN  ");
        		break;
       		case 8: printf("EIGHT  ");
        		break;
        	case 9: printf("NINE  ");
        		break;

		}
		}
    }
}
