#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include <algorithm>

using namespace std;

void main() {
	int A[] = {2,0,0,1,4,9,0,5,0,7};
	int count=0;                        //0 sayisini tutmak icin counter

    for (int i = 0; i < 10; i++)        //dizideki 0 sayisi kac tane ona baktik
    {
        if (A[i]==0)
        {
            count++;                    //her 0 icin count degerini arttirdik
        }
    }
	
    std::vector<int> tempvector(std::begin(A), std::end(A));        //diziyi vectore cevirdik
  

    tempvector.erase(std::remove(tempvector.begin(), tempvector.end(), 0), tempvector.end());   //vectordeki 0 degerlerini sildik
    for (int i = 0; i < count; i++)
    {
        tempvector.insert(tempvector.end(), -1);    //0 sayisi kadar (coun sayisi kadar) -1 ekledik vectorumuzun sonuna
    }
    

    for (int i : tempvector) {
        std::cout << i << " ";
    }
}