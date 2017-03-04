#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	const int MAX = 3;
	int var[MAX] = {10, 100, 200};
	int *ptr;
	ptr = var;
	int i = 0;

	while ( ptr <= &var[MAX - 1]) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		ptr++;
		i++;

	}
	return 0;
}