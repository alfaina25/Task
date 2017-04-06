#include <iostream>
using namespace std;
//I.S Program menunggu user memasukan data
//F.S Program menampilkan nilai Max/Min beserta jumlah kemunculanya

int main () {
	//Kamus
	int N,p;
	char r;
	//Meminta user untuk memasukan jumlah N
	cout << "Masukan Berapa Banyak N : ";
	cin >> p;
	//Agar user memasukan angka di atas -1
	if (p >= 0){
		N = p;

	} else {
		//Memunculkan notif Nilai tidak positif dan menghentikan program
		cout << "Nilai Tidak Positif";
		return 0;
	}
	//Meminta user memilih program yang akan di jalankan A = min, B = Max
	cout << endl << "A = Mencari Min, B = Mencari Nilai Max" << endl << endl;
	cout << "Masukan Pilihan Program A/B : ";
	// r untuk menyimpan pilihan user
	cin >> r;

	//kamus
	//Membuat array
	int angka[N];
	int m, n = 0,t = 0;

//Jika Pilihan A (Min)
	if (r == 'A'){
		//Pengulangan untuk meminta input dari user berulang sebanyak N
		for (int i = 0 ; i < N; i++){
		cout << "Masukan Nilai ke " << i+1 << " : ";
		cin >> angka[i];
		//Rumus Menentukan Nilai Min
		if (m > angka[i]){
			m = angka[i];
}

}		for (int l = 0; l < N; l++){
		//Rumus untuk menentukan banyaknya kemunculan nilai Min
		if (m == angka[l]){
			t++;
		}
		}

		//Menampilkan Hasil
		cout << "Nilai Min = " << m << endl;
		cout << "Jumlah Kemunculan = " << t;
		
	
//Jika Pilihan B (MAx)
} 		else if (r == 'B'){
	//Pengulangan untuk meminta input dari user berulang sebanyak N
		for (int i = 0 ; i < N; i++){
		cout << "Masukan Nilai ke " << i+1 << " : ";
		cin >> angka[i];
		//Rumus Menentukan Nilai Max
		if (n < angka[i]){
			n = angka[i];
}

} 		for (int l = 0; l < N; l++){
		//Rumus untuk menentukan banyaknya kemunculan nilai Max
		if (n == angka[l]){
			t++;
		}
		}

		//Menampilkan Hasil
		cout << "Nilai Max = " << n << endl;
		cout << "Jumlah Kemunculan = " << t;
	}
	//Menutup Program
	return 0;
}



