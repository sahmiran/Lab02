#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UZUNLUK 10


void foo(int dz[], int* x, int* y)
{
	//max1 en buyuk sayý, max2 en buyuk 2. sayý
	//min1 en kucuk sayi, min2 en kucuk 2. sayý
	int i, max1, max2, min1, min2;

	for (int i = 0; i < UZUNLUK; i++) //en buyuk 2 deger bulunuyor
	{
		if (dz[0] < dz[1]) {
			max1 = dz[1];
			max2 = dz[0];
		}
		else {
			max1 = dz[0];
			max2 = dz[1];
		}

		if (dz[i] > max1) {
			max2 = max1;
			&max1 = dz[i];
		}

		else if (dz[i] > max2 && dz[i] != max1) {
			max2 = dz[i];
		}
	}

	for (int j = 0; j < UZUNLUK; j++) //en kucuk 2 deger bulunuyor 
	{
		if (dz[0] < dz[1]) {
			min1 = dz[0];
			min2 = dz[1];
		}
		else {
			min1 = dz[1];
			min2 = dz[0];
		}
		for (int i = 0; i < UZUNLUK; i++) {
			if (min1 > dz[i]) {
				min2 = min1;
				min1 = dz[i];
			}
			else if (dz[i] < min2) {
				min2 = dz[i];
			}
		}
	}
	


	
}
void main()
{
	int i, sayilar[UZUNLUK], max2, min2;
	srand(time(NULL));
	for (i = 0; i < UZUNLUK; i++) {
		sayilar[i] = rand() % 100;
		printf("sayi [ %d ] = %d\n", i, sayilar[i]);
	}
	foo(sayilar, &max2, &min2);
	printf("%d %d\n", max2, min2);
}