#include <iostream>
using namespace std;
//Program Modular

//Modular
int Perbandingan (int x, int y){
	int maks = x;
	if (y > maks) maks = y;
	return maks;
}

int main () {
	//Kamus
	int a,b;

	//Program Input
	cout << "Masukan Bilangan Bulat ke 1 : ";
	cin >> a;
	cout << "Masukan Bilangan Bulat ke 2 : ";
	cin >> b;

	//Memuncul kan hasil dari Modular Perbandingan
	cout << "Bilangan yang lebih besar adalah: " << Perbandingan(a, b);
}

