#include <iostream>
using namespace std;

int main() {
  int *nil1;
  int nil2 = 9;

  nil1 = &nil2;
  cout << "Nilai dari nil1  : " << nil1 << endl;
  cout << "Nilai dari *nil1 : " << *nil1 << endl;

  nil2 = 10;
  cout << "Nilai dari *nil1 : " << *nil1 << endl;

  *nil1 = 8;
  cout << "Nilai dari *nil1 : " << *nil1 << endl;

  nil2 = 19;
  cout << "Nilai dari *nil1 : " << *nil1 << endl;

  return 0;
}