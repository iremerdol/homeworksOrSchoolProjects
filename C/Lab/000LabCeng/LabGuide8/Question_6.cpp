#include <stdio.h>

int atm(int a,int *tl100,int *tl50,int *tl20,int *tl10,int *tl5){
	
	if((a%5) != 0){
			return(0);
		}
	
		else{
			*tl100 = a/100;
			a = a - *tl100*100;
			*tl50 = a/50;
			a = a - *tl50*50;
			*tl20 = a/20;
			a = a - *tl20*20;
			*tl5 = a/5;
			return(1);
		}
}



int main(){
	
	FILE *file;	
	file = fopen("amount.txt","r");
	int money,tl100,tl50,tl20,tl10,tl5;
	
	while(!feof(file)){
		
		fscanf(file,"%d",&money);
		
		if(atm(money,&tl100,&tl50,&tl20,&tl10,&tl5)){
			if(tl100>0)
				printf("%d units 100TL, ",tl100);
			if(tl50>0)
				printf("%d units 50TL, ",tl50);
			if(tl20>0)
				printf("%d units 20TL, ",tl20);
			if(tl10>0)
				printf("%d units 10TL, ",tl10);
			if(tl5>0)
				printf("%d units 5TL\n",tl5);
			
		}
		else{
			printf("%d cannot be given.\n",money);
		}
		
		
	}
	return 0;
}

