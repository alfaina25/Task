#include <iostream>
using namespace std;

//I.S Program menunggu user memasukan nilai IP sampai user memasukan -999
//F.S Program menampilkan hasil dari semua yang sudah di proses

int main (){
	//kamus
	int jmlmhs = 0, mhsl = 0, mhstl =0;
	//jmlmhs = Jumlah Mahasiswa, mhsl = Mahasiswa Lulus, mhstl = Mahasiswa Tidak Lulus
	float IP, total = 0, rata;
	cout << "Masukan nilai IP: ";
	cin >> IP;
	while(IP > -999) {
		if(IP>=0 && IP<=4) {
		jmlmhs++;
		total = total + IP;
		if(IP>=2.75){
		mhsl++;

		} else {
		mhstl++;
		} 
	}
		cout << "Masukan nilai IP: ";
		cin >> IP;
		
	}


cout << endl;	
cout << "Jumlah Mahasiswa = " << jmlmhs << endl;
cout << "Jumlah Mahasiswa Lulus = " << mhsl << endl;
cout << "Jumlah Mahasiswa Tidak Lulus = " << mhstl << endl;
rata = total / jmlmhs;
cout << "Rata - Rata IP = " << rata;
	return 0;
}
