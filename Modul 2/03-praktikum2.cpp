#include <iostream>
using namespace std;

void tambahPoin(int &poinsaya, int poin) {
  poinsaya = poinsaya + poin;
}

void kurangPoin(int &poinsaya, int poin, int *penggunaanpoin) {
  poinsaya = poinsaya - poin;
  *penggunaanpoin = *penggunaanpoin + poin;
}

void lihatPoin(int poinsaya) {
  cout << "Jumlah Poin Saat Ini: " << poinsaya << endl;
}

void lihatPenggunaanPoin(int penggunaanpoin) {
  cout << "Total Penggunaan Poin: " << penggunaanpoin << endl;
}

void menu() {
  cout << "Menu Poin" << endl;
  cout << "(1) Tambah Poin" << endl;
  cout << "(2) Kurang Poin" << endl;
  cout << "(3) Cek Poin" << endl;
  cout << "(4) Penggunaan Poin" << endl;
  cout << "Masukkan Pilihan (1, 2, 3, 4): ";
}

int main() {
  int pilih, poinsaya, poin, penggunaanpoin = 0;
  poinsaya = 40;
  lihatPoin(poinsaya);
  while (true) {
    menu();
    cin >> pilih;
    if (pilih == 1) {
      cout << "Masukkan Jumlah Poin Yang Ditambahkan: ";
      cin >> poin;
      tambahPoin(poinsaya, poin);
    } else if (pilih == 2) {
      cout << "Masukkan Jumlah Poin Yang Digunakan: ";
      cin >> poin;
      kurangPoin(poinsaya, poin, &penggunaanpoin);
    } else if (pilih == 3) {
      lihatPoin(poinsaya);
    } else if (pilih == 4) {
      lihatPenggunaanPoin(penggunaanpoin);
    } else {
      cout << "PiLIHAN SALAH" << endl;
    }
    cout << "---------------------------------------------" << endl;
  }

  return 0;
}