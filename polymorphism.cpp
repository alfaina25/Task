#include <iostream>
using namespace std;
//I.S E-Learning membuat program Polymorphism
//F.S program akan menampilkan hasil dari perhitungan

/*Polymorphism adalah konsep dimana kita bisa membuat 2 fungsi atau lebih dengan menggunakan variabel yang sama, dan memungkinkan kita untuk
membuat class lebih dari satu di mana class yang lain akan menginduk ke class utama*/

//class utama
class Persegi_Panjang {
  protected:
   //kamus
    int panjang, lebar;
  public:
    nilai_value (int a, int b)
      { panjang=a; lebar=b; }

      //Virtual Fungtion "virtual"
      virtual int rumus () =0;
      /*kegunaan Virtual Fungtion "virtual"
      digunakan untuk memisahkan fungsi ini dari class utama
      karena fungsi ini akan di gunakan untuk class turunan*/
};

//class turunan

//class turunan : class utama {isi class}
class luas: public Persegi_Panjang {
  public:
    int rumus()
    //rumus luas
      { return panjang*lebar; }
};

//class turunan 2

//class turunan : class utama {isi class}
class keliling: public Persegi_Panjang {
  public:
    int rumus()
    //rumus keliling
      { return (panjang+lebar)*2; }
};

//fungsi utama (main)
int main () {
   //membuat variabel kll sebagai class keliling
  keliling kll;
  //membuat variabel ls sebagai class luas
  luas ls;

  //pointers
  // membuat "rumus1" agar bisa mengakses "Persegi_Panjang" dan memasukan langsung ke alamat kll (Keliling)
  Persegi_Panjang * rumus1 = &kll;
  // membuat "rumus2" agar bisa mengakses "Persegi_Panjang" dan memasukan langsung ke alamat ls (Luas)
  Persegi_Panjang * rumus2 = &ls;

  //memasukan nilai lewat "rumus1" dan memasukanya ke "nilai_value" yang ada di "Persegi_Panjang"
  rumus1->nilai_value (4,5);

  //memasukan nilai lewat "rumus2" dan memasukanya ke "nilai_value" yang ada di "Persegi_Panjang"
  rumus2->nilai_value (4,5);

  //menampilkan teks dan hasil keliling
  cout << "Keliling Persegi panjang adalah: " << kll.rumus() << '\n';
  //menampilkan teks dan hasul luas
  cout << "Luas Persegi panjang adalah: " << ls.rumus() << '\n';
  return 0;
}