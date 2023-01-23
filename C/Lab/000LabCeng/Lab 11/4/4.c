#include <stdio.h>

int main() {
	
    FILE* words;
    int choice, status;
    char ch, arr_word[5][12], arr_choice[5];
    
    words = fopen("words.txt", "r");
	
	for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            fscanf(words, "%c ", &ch);
            arr_word[i][j] = ch;
        }
        
    }
    
	printf("Which word do you want to display?\n");
    scanf("%d", &choice);
	
	choice -= 1;
	
	for(int h = 0; h < 5; h++) {
		arr_choice[h] = arr_word[h][choice];
	}

	
    printf("The word is ");
    
    for(int k = 0; k < 5; k++) {
    	printf("%c", arr_choice[k]);
	}
    printf(".");

    fclose(words);

    return 0;
}

// While part. Sonra bak (now the code is static. make it dynamic with these)
    /*
    status = 1;
    int r = 0, c;
    while(status != EOF) {
        c = 0;
        while(ch != '\n') {
            arr_word[r][c] = ch;
            c++;
            status = fscanf(words, "%s", &ch);
        }
        r++;
    }
    */
	/*
	//Print array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++) {
            printf("%c", arr_word[i][j]);
        }
        printf("\n");
    }
    */
