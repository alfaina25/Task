#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses


class Calculator {

//tombol, layar -> variabel
//tambah, kurang, kali, bagi - fungsi
	public :
	//data
	int x;
	int y;

	int tambah (int x, int y) {
		return x + y;
	}
	int kurang (int x, int y) {
		return x - y;
	}
	int kali (int x, int y) {
		return x * y;
	}
	int bagi (int x, int y) {
		return x / y;
	}
};



int main (){
	
	Calculator seiko;

	cout << "Masukan nilai X: ";
	cin >> seiko.x;

	cout << "Masukan nilai Y: ";
	cin >> seiko.y;

	cout << endl;

	cout << "Hasilnya pertambahan X dan Y adalah: " << seiko.tambah(seiko.x, seiko.y) << endl;
	cout << "Hasilnya kurang X dan Y adalah: " << seiko.kurang(seiko.x, seiko.y) << endl;
	cout << "Hasilnya kali X dan Y adalah: " << seiko.kali(seiko.x, seiko.y) << endl;
	cout << "Hasilnya bagi X dan Y adalah: " << seiko.bagi(seiko.x, seiko.y);

	return 0;
}