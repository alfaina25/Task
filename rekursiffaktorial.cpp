#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

//prototype
long rekursiffaktorial(int f);

int main (){
	int x;
	int n = 4;
	cout << n << "! = "<< rekursiffaktorial(n) << endl;

	n = 9;

	cout << n << "! = " << rekursiffaktorial(n) << endl;

	cout <<"Masukan Angka yang akan di faktorialkan : ";
	cin >> x;

	cout << x <<"! = " << rekursiffaktorial(x) << endl;
	
	return 0;
}

long rekursiffaktorial(int f){
	if (f == 0)
		return 1;
	else
		return f*
	rekursiffaktorial(f - 1); //penghenti
}