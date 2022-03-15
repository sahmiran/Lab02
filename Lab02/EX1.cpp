#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;


void main() {

	int A[] = {1,2,3,4,5,6,7,8,9};					//onceden tanimli dizi
	int N;											//ne kadar kaydirilacagini tutan degisken
	char direction;									//hangi yone kayma yapilacagini belirleyen degisken
	int temp;										//deger kaybetmemek icin gecici olarak kullanacagimiz degisken
	int index = 0;

	cout << "Diziyi kac birim kaydirmak istiyorsunu" << endl;
	cin >> N;										//N degeri kullanicidan istendi

	cout << "Hangi yone kaydirma islemi yapilsin     Sag = r  ----- Sol = l" << endl;
	cin >> direction;								// direction bilgisi kullanicidan istendi

	

	if (direction == 'l')							//sola bir birim kayma islemini N kere tekrarla
	{
		while (index<N)
		{
			temp = A[0];

			for (int i = 0; i < 8; i++)
			{
				A[i] = A[i + 1];
			}

			A[8] = temp;	
			index++;
		}
		
				
	}

	if (direction == 'r')							//saga bir birim kayma islemini N kere tekrarla
	{
		while (index < N)
		{
			temp = A[8];

			for (int i = 8; i >0; i--)
			{
				A[i] = A[i-1];
			}

			A[0] = temp;
			index++;
		}
		

	}

	for (int k = 0; k < 9; k++)
	{
		cout << A[k] << " ";
	}


}
