//CENG - Ýrem Erdöl - 21050111055

#include <stdio.h>
#include <math.h>
#define SIZE 20

void printNumber(int x[],int sizex){
	int i = 0;

    for(i = 0; i < sizex; i++){
		printf("%d", x[i]);
	}
    printf("\n\n");
}

int add(int x[], int sizex, int y[], int sizey, int res[]){
	
	int maxS, cnt = 0;
	int temp[SIZE] = {0};
	int hold[SIZE] = {0};
	
	if(sizex > sizey){
		maxS = sizex;
		for(int i = 0;i < sizex; i++){
			if(i < sizey)
				temp[i] = y[i];
			else
				temp[i] = 0;
		}
		for(int i = 0;i < sizex; i++){
			if((x[i] + temp[i]) > 9){
				hold[i+1] += (x[i] + temp[i]) / 10;
				if(i == sizex-1)
					cnt++;
			}
			
			hold[i] += (x[i] + temp[i]) % 10;
			 
		}
	}
	else{
		maxS = sizey;
		for(int i = 0;i < sizey; i++){
			if(i < sizex)
				temp[i] = x[i];
			else
				temp[i] = 0;
		}
		for(int i = 0;i < sizey; i++){
			if((y[i] + temp[i]) > 9){
				hold[i+1] += (y[i] + temp[i]) / 10;
				if(i == sizey-1)
					cnt++;
			}
			
			hold[i] += (y[i] + temp[i]) % 10;
			 
		}
	}
	
	maxS += cnt;
	
	int j = maxS - 1;
    for (int i = 0; i < maxS; i++){
        res[i] = hold[j--];
    }
	
	return maxS;
	
}

int sub(int x[], int sizex, int y[], int sizey, int res[]){
	int i = 0;

	for(i = 0;i<SIZE;i++){
		res[i] = 0;
	}
	
	int maxSize, count = 0;
	int temp[SIZE] = {0};
	int hold[SIZE] = {0};
	
	if(sizex > sizey){
		maxSize = sizex;
		for(i = 0;i < sizex; i++){
			if(i < sizey)
				temp[i] = y[i];
			else
				temp[i] = 0;
		}
		int holdx[sizex];
		for(i = 0;i<sizex;i++){
			holdx[i] = x[i];
		}
		
		for(i = 0;i < sizex; i++){
			if(holdx[i] - temp[i]<0){
				if(i == sizex - 2 && holdx[sizex-1] == 1)
					count++;
					
				holdx[i+1]--;
				holdx[i] += 10;
			}
			
			hold[i] = holdx[i]-temp[i]; 
		}
	}
	else{
		int a = 0;
		while(a++<sizex){
			if(x[sizex-1]>y[sizey-1]){
				maxSize = sizex;
				for(i = 0;i < sizex; i++){
					if(i < sizey)
						temp[i] = y[i];
					else
						temp[i] = 0;
				}
				int holdx[sizex];
				for(i = 0;i<sizex;i++){
					holdx[i] = x[i];
				}
				
				for(i = 0;i < sizex; i++){
					if(holdx[i] - temp[i]<0){
						if(i == sizex - 2 && holdx[sizex-1] == 1)
							count++;
							
						holdx[i+1]--;
						holdx[i] += 10;
					}
					
					hold[i] = holdx[i]-temp[i]; 
				}
			}
		}	
	}
    
    int j = maxSize - 1 - count;
    for (i = 0; i < maxSize; i++){
        res[i] = hold[j--];
    }
	
	return (maxSize - count);
}

int multiply(int x[], int sizex, int y[], int sizey, int res[]){
	
	for(int i = 0;i<SIZE;i++){
		res[i] = 0;
	}
	
	int maxS,minS,cnt = 0,tempp;
	int j = 0,maxInd = 0;
	
	if(sizex>sizey){
		maxS = sizex;
		minS = sizey;
		maxInd = sizex;
		
		int hold[sizey][SIZE];
		int t = 0;
		int temp[SIZE] = {0};
		
		for(int i = 0; i < sizey; i++){
			for(j = 0; j < i;j++){
				hold[i][j] = 0;
				cnt++;
			}
			for(int k = 0; k < sizex; k++){
				hold[i][j++] = (y[i]*x[k] + t) % 10;
				t =  (y[i]*x[k] + t) / 10;	
			}
			if(t > 0){
				hold[i][j++] = t;
				cnt++;
			}
			
			t = 0;
			
			int test[SIZE] = {0};
			
			for(int s = 0;s<maxInd;s++){
				test[maxInd-s-1] = res[s];
			}
			
			maxInd = add(test,maxInd,hold[i],j,res);
		
			cnt=0;
		}
		
	}
	else{
		maxS = sizey;
		minS = sizex;
		maxInd = sizey;
		
		int hold[sizex][SIZE];
		int t = 0;
		int temp[SIZE] = {0};
		
		for(int i = 0; i < sizex; i++){
			for(j = 0; j < i;j++){
				hold[i][j] = 0;
				cnt++;
			}
			for(int k = 0; k < sizey; k++){
				hold[i][j++] = (y[k]*x[i] + t) % 10;
				t =  (y[k]*x[i] + t) / 10;	
			}
			if(t > 0){
				hold[i][j++] = t;
				cnt++;
			}
			
			t = 0;
			
			int test[SIZE] = {0};
			
			for(int s = 0;s<maxInd;s++){
				test[maxInd-s-1] = res[s];
			}
			
			maxInd = add(test,maxInd,hold[i],j,res);
		
			cnt=0;
		}
		
	}
	
	
	return maxInd;
}

int divide(int x[], int sizex, int y[], int sizey, int res[]){
	
	int holdx = sizex;
	int temp[sizex];
	int ans = 0,holdmepls = 0;
	int temp2[SIZE];
	
	for(int i = 0;i<SIZE;i++){
		res[i] = 0;
	}
	
	for(int i = 0;i<sizex;i++){
		temp[i] = x[i];
	}
	
	if(sizex>sizey){
		
		while(holdx != sizey){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}
			ans++;
		}
	
		while(temp[sizey-1] > y[sizey-1]){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}	
			ans++;
		}
		
		for(int i = 0;i<holdx;i++){
			res[i] = temp[holdx-i-1];
		}
		
		while(ans > 0){
			res[holdmepls++] = ans%10;
			ans = ans/10;
		}
		return holdmepls;
	}
	else{
		
		if(temp[sizey-1] > y[sizey-1]){
			while(temp[sizey-1] > y[sizey-1]){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}
			ans++;	
			}
		}
		else{
			for(int i = 0;i<sizex;i++){
				res[i] = x[i];
			}
			return sizex;
		}
		while(ans > 0){
			res[holdmepls++] = ans%10;
			ans = ans/10;
		}
		return holdmepls;
	}
}

int mod(int x[], int sizex, int y[], int sizey, int res[]){
	
	int holdx = sizex;
	int temp[sizex];
	int temp2[SIZE];
	
	for(int i = 0;i<SIZE;i++){
		res[i] = 0;
	}
	
	for(int i = 0;i<sizex;i++){
		temp[i] = x[i];
	}
	
	if(sizex>sizey){
		
		while(holdx != sizey){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}
		}
	
		while(temp[sizey-1] > y[sizey-1]){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}	
		}
		
		for(int i = 0;i<holdx;i++){
			res[i] = temp[holdx-i-1];
		}
		
		return holdx;
	}
	else{
		
		if(temp[sizey-1] > y[sizey-1]){
			while(temp[sizey-1] > y[sizey-1]){
			holdx = sub(temp, holdx, y, sizey, temp2);
			for(int s = 0;s<holdx;s++){
				temp[holdx-s-1] = temp2[s];
			}
			
			for(int i = 0;i<SIZE;i++){
				temp2[i] = 0;
			}	
		}
		}
		else{
			for(int i = 0;i<sizex;i++){
				res[i] = x[i];
			}
			return sizex;
		}
	}
}

int main(void)
{
    // for x the num is 5243 and for y the num is 235
    int x[] = {4, 3, 2, 5}, y[] = {5, 3, 2}, res[SIZE];
    int sizex = sizeof(x) / sizeof(int), sizey = sizeof(y) / sizeof(int), i;
    int sizeRes;

    sizeRes = add(x, sizex, y, sizey, res);
    printf("the answer of the add is: \n");
    printNumber(res, sizeRes);

    sizeRes = multiply(x, sizex, y, sizey, res);
    printf("the answer of the multiply is: \n");
    printNumber(res, sizeRes);

    sizeRes = divide(x, sizex, y, sizey, res);
    printf("the answer of the divide is: \n");
    printNumber(res, sizeRes);

    sizeRes = mod(x, sizex, y, sizey, res);
    printf("the answer of the mod is: \n");
    printNumber(res, sizeRes);

    return 0;
}
