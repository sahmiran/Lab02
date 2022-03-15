#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

void main() {
	int A[] = { 1,2,2,8,4,4,6,6,6,8,4,9 };
	int maxlenght = 0;							//subarray uzunlugu icin bir deger
	int index;									//tekrar eden  degerin arraydeki yerini tutmak icin bir index degiskeni atadik
	int tempmax = 1;							//gecici max boyut degiskeni			

	for (int i = 0; i < 11; i++)
	{
		if (A[i]==A[i+1])						 
		{
			tempmax++;							//bir sonraki dizi elemani bir onceki dizi elemani ile  ayni degerse gecici  max boyut degiskenini arttirdik
			maxlenght = tempmax;				//gecici max boyut degiskenini max boyut degiskenine atadik
			index = i;							//elemanin indexini tutuk
		}

		else
		{
			tempmax = 1;						//eger bir sonraki eleman onceki eleman ile ayni degilse gecici max boyut degiskenini 1 olarak degistirdik
		}

		
	}

	cout << "Max lenght of the subarray is " << maxlenght << endl;
	for (int i = 0; i < maxlenght; i++)
	{
		cout << A[index];
	}
}