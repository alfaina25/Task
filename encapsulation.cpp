#include <iostream>
using namespace std;

/*Enkapsulasi
adalah proses dimana kita bisa menaruh mekanisme
yang memungkinkan kita untuk menapilkan data yang bersifat publik
dan menyembunyikan beberapa data dari pengguna*/

class Perhitungan{
   public:
      // constructor
      Perhitungan(int i = 0) {
         total = i;
      }
		
      // Mengambil jumlah data dari varabel add_Num
      void add_Num(int number) {
         /*Variabel total dengan + artinya variabel tersebut akan
         mengambil setiap data dari variabel yang dimaksud.
         tanda = number, "="artinya variabel yang di tuju adalan number*/
         total += number;
      }
		
      // Mengembalikan jumlah seluruh data pada sebuah variabel "total"
      int ambilTotal() {
         //Mengembalikan jumlah seluruh data, dan dikembalikan pada "total"
         return total;
      };
		
   private:
      // data yang di sembunyikan
      int total;
};

//Program Utama
int main( ) {

   //Perhitungan diwakili dengan "a"
   Perhitungan a;
   
   //Memasukan nilai
   a.add_Num(200);

   //Memasukan nilai
   a.add_Num(205);

   //Memasukan nilai
   a.add_Num(35);

   //Menampilkan teks dan mengambil semua data
   cout << "Total semua data adalah: " << a.ambilTotal() <<endl;
   return 0;
}