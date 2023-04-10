#include <iostream>
using namespace std;

void pangkat2(float *angka) {
  *angka = *angka * *angka;
}

void bagi10(float &angka) {
  angka = angka / 10;
}

int main() {
  float bil = 5;
  cout << "Nilai Bil: " << bil << endl;
  pangkat2(&bil);
  cout << "Nilai Bil: " << bil << endl;
  bagi10(bil);
  cout << "Nilai Bil: " << bil << endl;

  return 0;
}