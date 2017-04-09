#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

typedef struct{
	string hari;
	string bulan;
	string tahun;
} tanggal;

int main (){
//kamus
	tanggal A;
	cin >> A.hari;
	cin >> A.bulan;
	cin >> A.tahun;
	cout << A.hari << endl;
	cout << A.bulan << endl;
	cout << A.tahun << endl;

	return 0;
}
