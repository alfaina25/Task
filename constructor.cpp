#include <iostream>
//I.S Program dijalankan menggunakan COnstructor
//F.S Program menampilkan data panjang
using namespace std;
 
class Garis {
   public:
      void setLength( double len );
      double getLength( void );
      Garis (double len);  // ini fungsi construktor
 
   private:
      double length;
};
 
// Anggota Class yang menggunakan Construktor
Garis::Garis(double len) {
   cout << "Objek Sedang Di buat, Panjang = " << endl;
   length = len;
}
 
 //Mengambil nilai panjang melalui "len"
void Garis::setLength( double len ) {
   length = len;
}
 
 //Mengembalikan data "Length" berdasarkan total nilai
double Garis::getLength( void ) {
   return length;
}

// Program utama
int main( ) {
   //"line()" mewakili class Garis dan nilai yang di tulis akan dimasukan ke konstruktor utama
   Garis line(154.0);
   
   //Menampilkan hasil yang diproses langsung oleh construktor
   cout << "Panjang dari garis lewat konstruktor adalah: " << line.getLength() <<endl;
   //memasukan nilai panjang
   line.setLength(60.0); 
   //menampilkan hasil yang telah di masukan sebelumnya
   cout << "Panjang dari garis secara langsung adalah: " << line.getLength() <<endl;
 
   return 0;
}