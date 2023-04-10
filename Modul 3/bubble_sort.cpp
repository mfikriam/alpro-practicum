#include <iostream>
using namespace std;

int main() {
  int nilai[6] = {6, 1, 2, 3, 4, 5};
  int temp;

  cout << "Data sebelum diurutkan" << endl;
  for (int i = 0; i <= 5; i++)
  {
    cout << nilai[i] << "  ";
  }
  cout << endl << endl;

  for (int i = 5; i >= 0; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (nilai[j] > nilai[j + 1]) {
        temp = nilai[j + 1];
        nilai[j + 1] = nilai[j];
        nilai[j] = temp;
      }
    }
  }

  cout << "Data setelah diurutkan (Ascending)" << endl;
  for (int i = 0; i <= 5; i++)
  {
    cout << nilai[i] << "  ";
  }

  cout << endl;
  cout << "Data setelah diurutkan (Descending)" << endl;
  for (int i = 5; i >= 0; i--)
  {
    cout << nilai[i] << "  ";
  }

  return 0;
}