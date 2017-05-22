#include <iostream>
using namespace std;

int main (){
	int x[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
	int cari, i, j, k;
	cout << "Data yang Tersedia : 10, 9, 8, 7, 6, 5, 4, 3, 2" << endl;
	cout << "Masukan Data yang dicari : ";
	cin >> cari;

	i = 0;
	j = 8;
	k = (i+j)/2;

	while (i <= j){
	if (x[k] == cari){
		cout << "Data Ditemukan dalam index ke : " << k;
		break;
	}
	else if (x[k] > cari) 
		{ 
			i = k + 1; 
		}
        else 
        { 
        	j = k - 1;
        }

		k = (i+j)/2;
}
	if (i>j)
		cout << "Data Tidak Di Temukan";

		return 0;
	}