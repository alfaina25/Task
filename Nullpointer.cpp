#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int *ptr = NULL;

	cout << "The value of ptr is " << ptr << endl;
	if(ptr){
		cout << "not Null" << endl;
	} else {
		cout << "null" << endl;
	}

	if(!ptr) {
		cout << "null" << endl;
	} else {
		cout << "not null" << endl;
	}
	return 0;
}