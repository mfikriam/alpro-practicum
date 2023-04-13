#include <iostream>

using namespace std;

void aritmatika(int angka1, int angka2, int *tambah, int *kurang, int *kali, int *bagi) {
  *tambah = angka1 + angka2;
  *kurang = angka1 - angka2;
  *kali = angka1 * angka2;
  *bagi = angka1 / angka2;
}

int main() {
  int angka1, angka2, tambah, kurang, kali, bagi;

  cout << "Masukkan angka pertama : ";
  cin >> angka1;

  cout << "Masukkan angka kedua   : ";
  cin >> angka2;

  // Memanggil fungsi aritmatika
  aritmatika(angka1, angka2, &tambah, &kurang, &kali, &bagi);

  // Menampilkan Hasil
  cout << "Pertambahan : " << tambah << endl;
  cout << "Pengurangan : " << kurang << endl;
  cout << "Perkalian   : " << kali << endl;
  cout << "Pembagian   : " << bagi << endl;

  return 0;
}