#include <iostream>
using namespace std;

struct Nilai
{
  int tugas[4];
  float uts;
  float uas;
  float rataRataTugas;
  float nilaiAkhir;
};

struct Mahasiswa {
  string nim, nama;
  Nilai nilai;
};


int main() {
  int n = 20;
  Mahasiswa listMahasiswa[n];

  // Input Nim & Nama
  listMahasiswa[0].nim = "13114057";
  listMahasiswa[0].nama = "Muhammad Fadly Akram";

  // Input Nilai Tugas, UTS, & UAS
  listMahasiswa[0].nilai.tugas[0] = 100;
  listMahasiswa[0].nilai.tugas[1] = 90;
  listMahasiswa[0].nilai.tugas[2] = 80;
  listMahasiswa[0].nilai.tugas[3] = 100;
  listMahasiswa[0].nilai.uts = 95;
  listMahasiswa[0].nilai.uas = 90;
  
  // Menghitung Rata-Rata Nilai Tugas
  int sumTugas = 0;
  int nTugas = sizeof(listMahasiswa[0].nilai.tugas) / sizeof(int);
  for (int i = 0; i < nTugas; i++)
  {
    sumTugas += listMahasiswa[0].nilai.tugas[i];
  }
  listMahasiswa[0].nilai.rataRataTugas = sumTugas / nTugas;

  // Menghitung Nilai Akhir
  float nilaiTugas = listMahasiswa[0].nilai.rataRataTugas * 0.3;
  float nilaiUTS = listMahasiswa[0].nilai.uts * 0.3;
  float nilaiUAS = listMahasiswa[0].nilai.uas * 0.4;
  listMahasiswa[0].nilai.nilaiAkhir = nilaiTugas + nilaiUTS + nilaiUAS;

  // Menampilkan Data Nilai Mahasiswa
  int i = 0;
  cout << "[Data Mahasiswa " << i + 1 << "]" << endl;
  cout << "NIM\t\t: " << listMahasiswa[i].nim << endl;
  cout << "Nama\t\t: " << listMahasiswa[i].nama << endl;
  cout << "Nilai Tugas: " << endl;
  for (int j = 0; j < nTugas; j++)
  {
    cout << " - Tugas " << j + 1 << " = " << listMahasiswa[i].nilai.tugas[j] << endl;
  }
  cout << "Nilai Rata-Rata Tugas\t= " << listMahasiswa[i].nilai.rataRataTugas << endl;
  cout << "Nilai UTS\t\t= " << listMahasiswa[i].nilai.uts << endl;
  cout << "Nilai UAS\t\t= " << listMahasiswa[i].nilai.uas << endl;
  cout << "Nilai Akhir\t\t= " << listMahasiswa[i].nilai.nilaiAkhir << endl;
  cout << "-------------------------------------" << endl;
  
  return 0;
}