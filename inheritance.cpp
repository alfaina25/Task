#include <iostream>
 //I.S E-Learning Inheritance
//F.S program menampilkan hasil yang sudah di proses
using namespace std;

/*Inherintance adalah turunan atau pewarisan suatu class ke class lain
dengan mewakili semua fungsi yang ada di class yang mewariskan*/

// Class Utama
class  Persegi_Panjang {
   public:
      void setWidth(int p) {
         panjang = p;
      }
		
      void setHeight(int l) {
         lebar = l;
      }
		
   protected:
      int panjang;
      int lebar;
};

// Class Pewaris
class luas: public Persegi_Panjang {
   public:
      int getArea() { 
         return (panjang * lebar); 
      }
};

int main(void) {
   luas ls;
 
   ls.setWidth(15);
   ls.setHeight(20);

   // Menampilkan Hasil Luas Persegi
   cout << "Total Perrhitungan: " << ls.getArea() << endl;

   return 0;
}