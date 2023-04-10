#include <iostream>
using namespace std;

double pangkat(double bil, int eksponen) {
  if (eksponen == 0) {
    return 1;
  } else {
    return bil * pangkat(bil, eksponen - 1);
  }
}

int main() {
  double bil = 2;
  int eksponen = 8;

  cout << bil << "^" << eksponen << " = " << pangkat(bil, eksponen) << endl;

  return 0;
}