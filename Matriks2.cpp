#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

int main (){
	int m [3][3];
	int m1 [3][3];
	int m2 [3][3];

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Masukan Nilai matriks 1 di Baris " << i+1 << " Kolom " << j+1 << " = ";
			cin >> m1 [i][j];
			cout << "Masukan Nilai matriks 2 di Baris " << i+1 << " Kolom " << j+1 << " = ";
			cin >> m2 [i][j];
			m [i][j] = m1 [i][j] + m2 [i][j];
		}
	}
	cout << endl << "			Matriks 3 x 3" << endl <<"	-------------------------------------------------" << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "	|	" << m [i][j];
		}
		cout << "	|" << endl << "	-------------------------------------------------" << endl;
	}
	return 0;
}

/* Tugas
tampilkan dengan tabel*/