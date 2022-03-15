#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define UZUNLUK 20
float f1(int a[]) {
	int i, toplam=0;
	float ortalama = 0, sapma = 0;

	for (int i = 0; i < UZUNLUK; i++)
	{
		toplam += a[i];
	}

	ortalama = toplam / UZUNLUK;		//dizi elemanlarinin ortalamasini bulduk

	for (int j = 0; j < UZUNLUK; j++)	//standart sapma hesapladik
	{
		sapma += pow(a[j] - ortalama, 2);
	}

	return sqrt(sapma / UZUNLUK);		//bulunan degeri dondurduk

}
void main() {
	int i, sayilar[UZUNLUK];
	srand(time(NULL));
	for (i = 0; i < UZUNLUK; i++)
		sayilar[i] = rand();
	for (int j = 0; j < UZUNLUK; j++) {		//random yaratilan dizinin elamanlarini gormek icin ekledim
		printf("%d\n", sayilar[j]);
	}

	printf("standart sapma%f\n", f1(sayilar));
}