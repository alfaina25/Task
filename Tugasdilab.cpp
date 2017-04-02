#include <iostream>
using namespace std;

int main () {
	int N,p,min,max;
	char r;

	//Kamus
	cout << "Masukan Berapa Banyak N : ";
	cin >> p;
	if (p > 0){
		N = p;

	} else {
		cout << "Nilai Tidak Positif";
		return 0;
	}
	cout << "Masukan Pilihan Program A/B : ";
	cin >> r;
	int angka [100];
	min = angka[0];
	max = angka[0];
	for (int i = 1, l = 0; i <= p; i++, l++){
		cout << "Masukan Nilai ke " << i << " : ";
		cin >> angka[l];

		if (min > angka[l]){
			min = angka[l];
		}
		if (max < angka[l]){
			max = angka[l];
		}
	}
	if (r == 'A'){
		cout << "Nilai Min = " << min;
	} else if (r == 'B'){
		cout << "Nilai Max = " << max;
	}
	return 0;
}



