#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

void numberFuction (int i){
//interasi
cout << "The number is: " << i << endl;
}
int main (){
	for (int i=0; i<10; i++){
		numberFuction(i);
	}
	
	return 0;
}