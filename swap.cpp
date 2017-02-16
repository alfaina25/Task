#include <iostream>
#include "swaplib.h" // Memasukan "swaplib.h" kedalam program
using namespace std;
//I.S Program Memasukan Angka untuk di proses
//F.S Program Menampilkan data yang telah di proses dalam swaplib.h

int main () {
	//Kamus
	int a = 100;
	int b = 200;
	//Algoritma

	//Tugas 1
	cout <<"before swap,value of a :" << a << endl;
	cout <<"before swap,value of b :" << b << endl;

	//Tugas 2
	swap (a, b);

	cout <<"after swap,value of a :" << a << endl;
	cout <<"after swap,value of b :" << b << endl;
	return 0;
}
