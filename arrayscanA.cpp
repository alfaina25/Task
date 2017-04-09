#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses


int main (){
//kamus
	int j = 0;
	string array[10];
	cout << "Masukan Elemen Array: " << endl; 
	//perulangan
	for (int i = 0; i<10; i++){
		cout << "Elemen " << i+1 << " = ";
		cin >> array[i];
		
	}

 cout << "masing masing elemen"<< endl;
	//perulangan
	for (int i = 0; i<10; i++){
		//scan elemen A
		if (array[i] == "A"){
			j++;
		}
		cout << "Elemen " << i+1 << " = " << array[i] << endl;
}
	cout << "Jumlah Kemunculan elemen A = " << j;
	return 0;
}
