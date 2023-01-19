//CENG Ýrem Erdöl - 21050111055

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define SIZE 10

void move(int n, int choice, int direction, char mapOfMouse[][SIZE], int *currentRow, int *currentColumn)
{
    int i, temp = 0;
    direction %= 4;
    if (direction < 0)
        direction += 4;

    if (choice == 2)
    {
        if (n > 0)
        {
            switch (direction)
            {
            case 0:
                if(*currentColumn + n > SIZE){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = *currentColumn; i < *currentColumn + n; i++)
                    {
                        mapOfMouse[*currentRow][i] = '*';
                        temp++;
                    }
                    *currentColumn += temp - 1;
                    temp = 0;
                }
                break;
            case 1:
                if(*currentRow + n > SIZE){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = *currentRow; i < *currentRow + n; i++)
                    {
                        mapOfMouse[i][*currentColumn] = '*';
                        temp++;
                    }
                    *currentRow += temp - 1;
                    temp = 0;
                }
                break;
            case 2:
                if(*currentColumn - n + 1 < 0){
                    printf("You cannot go that far.\n");
                }
                else {
                    for (i = 0; i < n; i++)
                    {
                        mapOfMouse[*currentRow][*currentColumn - i] = '*';
                        temp--;
                    }
                    *currentColumn += temp + 1;
                    temp = 0;
                    }
                break;
            case 3:
                if(*currentRow - n + 1 < 0){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = 0; i < n; i++)
                    {
                        mapOfMouse[*currentRow - i][*currentColumn] = '*';
                        temp--;
                    }
                    *currentRow += temp + 1;
                    temp = 0;
                }
                break;
            }
        }
    }
    else if (choice == 1)
    {
        if (n > 0)
        {
            switch (direction)
            {
            case 0:
                if(*currentColumn + n > SIZE){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = *currentColumn; i < *currentColumn + n; i++)
                    {
                        temp++;
                    }
                    *currentColumn += temp - 1;
                    temp = 0;
                }
                break;
            case 1:
                if(*currentRow + n > SIZE){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = *currentRow; i < *currentRow + n; i++)
                    {
                        temp++;
                    }
                    *currentRow += temp - 1;
                    temp = 0;
                }
                break;
            case 2:
                if(*currentColumn - n + 1 < 0){
                    printf("You cannot go that far.\n");
                }
                else {
                    for (i = 0; i < n; i++)
                    {
                        temp--;
                    }
                    *currentColumn += temp + 1;
                    temp = 0;
                    }
                break;
            case 3:
                if(*currentRow - n + 1 < 0){
                    printf("You cannot go that far.\n");
                }
                else{
                    for (i = 0; i < n; i++)
                    {
                        temp--;
                    }
                    *currentRow += temp + 1;
                    temp = 0;
                }
                break;
            }
        }
    }
}

int main(void)
{
    FILE *inpFile;
    inpFile = fopen("readThis.txt", "r");

    char mapOfMouse[SIZE][SIZE] = {' '};
    int n = 0, choice, hold = 1, currentRow = 0, currentColumn = 0, row, column, direction = 0;

    printf("--------------------\n");
    printf("        MENU        \n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("1- Pen up\n");
    printf("2- Pen down\n");
    printf("3- Turn right\n");
    printf("4- Turn left\n");
    printf("5- Move forward n spaces\n");
    printf("6- Print the array\n");
    printf("PRESS 9 TO QUIT\n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n\n\n");

    do
    {
        // printf("Select a choice:\n");
        fscanf(inpFile, "%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Pen is up now.\n");
            hold = 1;
            break;
        case 2:
            printf("Pen is down now. You can write.\n");
            hold = 2;
            break;
        case 3:
            printf("You turned right from your previous position.\n");
            direction++;
            break;
        case 4:
            printf("You turned left from your previous position.\n");
            direction--;
            break;
        case 5:
            //printf("Type down how much you want to move: \n");
            fscanf(inpFile, "%d", &n);
            move(n, hold, direction, mapOfMouse, &currentRow, &currentColumn);
            break;
        case 6:
            printf("Here's the current map:\n");
            for (row = 0; row < SIZE; row++)
            {
                for (column = 0; column < SIZE; column++)
                {
                    printf("%c ", mapOfMouse[row][column]);
                }
                printf("\n");
            }
            break;
        default:
            if (choice < 1 || choice > 9)
                printf("Please write a number between 1-6 or 9 for exit...\n");
            break;
        }

    } while (choice != 9);

    fclose(inpFile);
}
