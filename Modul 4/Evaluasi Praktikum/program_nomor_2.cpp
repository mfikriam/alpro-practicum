#include <iostream>
using namespace std;

int main() {
  int *nil1;
  int **nil3;
  int nil2 = 15;

  nil1 = &nil2;
  nil3 = &nil1;
  cout << "Nilai dari nil2   : " << nil2 << endl;
  cout << "Nilai dari &nil2  : " << &nil2 << endl;
  cout << "-------------------------------" << endl;

  cout << "Nilai dari nil1   : " << nil1 << endl;
  cout << "Nilai dari &nil1  : " << &nil1 << endl;
  cout << "Nilai dari *nil1  : " << *nil1 << endl;
  cout << "-------------------------------" << endl;

  cout << "Nilai dari nil3   : " << nil3 << endl;
  cout << "Nilai dari *nil3  : " << *nil3 << endl;
  cout << "Nilai dari **nil3 : " << **nil3 << endl;
  cout << "Nilai dari &nil3  : " << &nil3 << endl;
  cout << "-------------------------------" << endl;

  cout << "\n----------------Nomor 4----------------" << endl;
  nil2 = 35;
  cout << "Nilai dari **nil3 : " << **nil3 << endl << endl;

  return 0;
}