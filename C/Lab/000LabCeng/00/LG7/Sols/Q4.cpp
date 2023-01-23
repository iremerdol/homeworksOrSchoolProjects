#include <stdio.h>
#include <string.h>
/* CENG104 
Author: Evren*/
typedef struct city
{
	char cityname[50];
	char countryname[50];
	int population;
}city;

int BinarySearch(FILE *pbin, int left, int right, char *key);
int read(FILE *pcity, FILE *pbin);

void main()
{
	city cities;
	FILE *pcity = fopen("cities.txt", "r");
	FILE *binary = fopen("binary", "wb");
	int cnt_cities, ind;
	char search[20];

	if (pcity == NULL)
		printf("\nFile can not be opened!\n");
	else
	{
		cnt_cities = read(pcity, binary);
		fclose(binary);
		fclose(pcity);
		binary = fopen("binary", "rb");
		printf("\nEnter a city name: ");
		scanf("%s", search);

		ind = BinarySearch(binary, 0, cnt_cities, search);

		if (ind == -1)
			printf("\n\"%s\" could not found!!!\n\n\n", search);
		else
		{
			fseek(binary, sizeof(city)*ind, SEEK_SET);
			fread(&cities, sizeof(city), 1, binary);
			printf("%s %s %d\n\n", cities.cityname, cities.countryname, cities.population);
		}
		fclose(binary);
	}
}

int read(FILE *pcity, FILE *pbin)
{
	int	i=0;
	city cities;

	while (fscanf(pcity, "%s %s %d", cities.cityname, cities.countryname, &cities.population) != EOF)
	{
		fwrite(&cities, sizeof(city), 1, pbin);
		i++;
	}

	return i;
}


int BinarySearch(FILE *pbin, int left, int right, char *key)
{
	int middle;
	city cities;

	if (left > right)
		return -1;

	middle = (left + right) / 2;
	fseek(pbin, sizeof(city)*middle, SEEK_SET);
	fread(&cities, sizeof(city), 1, pbin);
	if (strcmp(cities.cityname, key) == 0)
		return middle;
	else
		if (strcmp(cities.cityname, key) == 1)
			return BinarySearch(pbin, left, middle - 1, key);
		else
			return BinarySearch(pbin, middle + 1, right, key);
}