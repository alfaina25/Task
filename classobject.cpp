#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

class Manusia {
	public: //scope
		int tinggi;
		int beratBadan;
		int kecepatanlari;
		string nama;

		private :
		string game;

		protected :
		string rahasia;

	public :

	void makan (){
		cout << "Makan" << endl;
	}
	void gamefavorit(){
		game = "Black Ops";
		cout << game << endl;
	}
	private :
	void tidur (){
		cout << "Tidur" << endl;
	}
};
int main (){
	Manusia rafli;
	Manusia elang;

	rafli.nama = "rafli";
	cout << "Nama: " <<rafli.nama << endl;
	rafli.tinggi = 172;
	cout << "Tinggi: " << rafli.tinggi << endl;
	rafli.kecepatanlari = 800;
	cout << "Kecepatan Lari: " << rafli.kecepatanlari << " km/s" << endl;
	rafli.beratBadan = 56;
	cout << "Berat Badan: " << rafli.beratBadan << endl;
	rafli.makan();
	rafli.gamefavorit();

	return 0;
}