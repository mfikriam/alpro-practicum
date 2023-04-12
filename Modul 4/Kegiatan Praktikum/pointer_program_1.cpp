#include <iostream>
using namespace std;

int main() {
  int *nil1;
  int nil2 = 10;
  nil1 = &nil2;

  cout << "Nilai dari nil2              : " << nil2 << endl;
  cout << "Nilai dari Deference nil2    : " << &nil2 << endl;
  cout << "Nilai dari nil1              : " << nil1 << endl;
  cout << "Nilai dari Reference nil1    : " << *nil1 << endl;
  cout << "Nilai dari Deference nil1    : " << &nil1 << endl;

  return 0;
}