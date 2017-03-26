#include <iostream>
#include <functional>
#include <algorithm> 
using namespace std;
// Program Modular Ganjil dan Genap
//I.S Program Memproses data
//F.S Program menampilkan hasil dari transform

int main () {
	//Kamus
  int numbers[]={1,2,3,4,5,6}; // Fungsi Array
  int remainders[6]; // Fungsi Array
  //??? tapi mengerti fungsinya
	transform (numbers, numbers+6, remainders, bind2nd(modulus<int>(),2));
	// Perulangan
  for (int i=0; i<6; i++)
    cout << numbers[i] << " Adalah Bilangan " << (remainders[i]==0?"Genap":"Ganjil") << '\n';
  return 0;
}