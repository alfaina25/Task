#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int var = 10;
	int *ptr = &var;

	cout << ptr << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;

	return 0;
}