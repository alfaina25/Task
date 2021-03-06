#include <iostream>
using namespace std;

//I.S Program menunggu memasukan angka
//F.S Program menampilkan angka yang sudah di proses

//prototype
void quickSort(int arr[], int left, int right);
int main (){
	
	int N;
	cout << "Masukka jumlah elemen Array A: ";
	cin >> N;
	int A[N];

	for (int i = N; i > 0; i--){
		cout << "Masukan Nilai Array A ke "<< i << " : ";
		cin >> A[i];
	}
	quickSort (A, 0, 9);
	cout << endl;

	for (int j = 1; j <= N; j++){
		cout << A[j] << endl;
	}
	return 0;
}

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	//partition
	while (i <= j) {
		while (arr[i]<pivot)
			i++;
		while (arr[j]>pivot)
			j--;
		if (i<=j){
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}