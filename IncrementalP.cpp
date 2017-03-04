#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	const int MAX = 3;
	int var[MAX] = {10, 100, 200};
	int *ptr;

	//alamat array ke pointer
	ptr = var;

	for (int i = 0; i < MAX; i++) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// Menunjuk ke memory selanjutnya
		ptr++;
	}

	return 0;
}