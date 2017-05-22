#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int X[10] = {23, 24, 54, 32, 43, 56, 12, 78, 86, 22};
	int cari;
	bool ketemu;


	cout << "Masukan Data Yang Ingin di Cari : ";
	cin >> cari;
	cout << endl;

	for (int i = 0; i < 10; i++){
		if (X[i] == cari){
			ketemu = true;
			break;
		} else 
			ketemu = false;
	}
	if (ketemu == true)
	cout << "Data ditemukan";
	else
	cout << "Data Tidak Ketemu";
		return 0;
}