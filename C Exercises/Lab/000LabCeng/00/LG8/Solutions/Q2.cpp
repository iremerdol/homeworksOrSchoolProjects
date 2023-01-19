#include <stdio.h>
#include <string.h>

typedef struct
{
	int num;
	char user[15];
	int miles_driven;
	int gallons_used;
}car_t;

void convertString(int num2, char *part2)
{
	int j = 0, d, i = 0;
	char temp[20];

	while (num2 != 0)
	{
		d = num2 % 10;
		temp[j] = d + '0';
		j++;
		num2 = num2 / 10;
	}
	temp[j] = '\0';

	while (j>0)
	{
		part2[i] = temp[j - 1];
		j--;
		i++;
	}
	part2[i] = '\0';
}

int
main(void)
{
	int i, mil;
	char part1[20], part2[20], part3[20];
	car_t temp;
	FILE *inp;

	/* BINARY FILE CREATION
	FILE *out;
	int status;
	inp = fopen("car_info.txt","r");
	out = fopen("car_info_bin.bin","wb");

	status = fscanf(inp,"%d %s %d %d",&temp.num,temp.user,&temp.miles_driven,&temp.gallons_used);
	while(status != EOF)
	{
	fwrite(&temp, sizeof(car_t), 1, out);
	status = fscanf(inp,"%d %s %d %d",&temp.num,temp.user,&temp.miles_driven,&temp.gallons_used);
	}*/

	inp = fopen("car_info_bin.bin", "rb");
	if (inp == NULL)
		printf("Binary file can not be opened");
	else
	{
		printf("CAR NUM CAR USER MILES DRIVEN GALLONS USED CAR ID\n");
		printf("------- -------- ------------ ------------ ------\n");
		i = 0;
		fread(&temp, sizeof(car_t), 1, inp);
		while (!feof(inp))
		{
			mil = temp.miles_driven / temp.gallons_used;
			strncpy(part1, temp.user, 2);
			part1[2] = '\0';
			convertString(temp.num, part2);
			convertString(mil, part3);

			strcat(part1, part2);
			strcat(part1, "-");
			strcat(part1, part3);

			printf("%5d     %-10s %d %10d      %-10s\n", temp.num, temp.user, temp.miles_driven, temp.gallons_used, part1);

			fread(&temp, sizeof(car_t), 1, inp);
		}
	}


	return(0);
}