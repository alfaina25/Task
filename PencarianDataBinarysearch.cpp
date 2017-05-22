#include<iostream>
#include<conio.h>
using namespace std;

main() {
	int i = 0,N,angka,bilangan;
cout<<"  Masukan Banyaknya Bilangan = ";cin>>N;
int Nilai[N];


//membaca elemen array
while(i<N){
cout<<"  Masukan Elemen Ke - "<<i<<" = ";cin>>Nilai[i]; i++;}

//mencetak elemen arrray 
cout<<"  Deretan Bilangan       = ";
i = 0;
while(i<N){
cout<<Nilai[i]<<" "; i++;
}
cout<<endl<<endl;
cout<<"  Masukan Bilangan Yang Dicari  = ";
cin>>bilangan;
cout<<endl;  

//melakukan pencarian
i=0;
do{
if(Nilai[i]==bilangan)
angka=Nilai[i];
i++;}
while(i<N);
if(angka==bilangan)
cout<<"  Bilangan "<<bilangan<<" Ditemukan";
else
cout<<"  Bilangan "<<bilangan<<" Tidak Ditemukan";
getch();
}