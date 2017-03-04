#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

void numberFuction (int i){
//interasi
cout << "The number is: " << i << endl;
i++; // penghenti
if(i<10){
	numberFuction(i);
}
}
int main (){
	int i = 0;
	numberFuction(i);

	
	return 0;
}