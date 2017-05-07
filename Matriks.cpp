#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int m [3][3];

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Masukan Nilai di Baris " << i+1 << " Kolom " << j+1 << " = ";
			cin >> m [i][j];
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Nilai dari Baris " << i+1 << " Kolom " << j+1 << " = " << m [i][j] << endl;
		}
	}
	return 0;
}