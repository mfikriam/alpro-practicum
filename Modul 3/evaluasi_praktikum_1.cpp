#include <iostream>
#include <string>
using namespace std;

void selectionSort(string &name) {
  int n = name.length();

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (name[i] > name[j]) {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
      }
    }
  }
}

int main() {
  string name;
  cout << "Input name: ";
  getline(cin, name);

  selectionSort(name);

  cout << "\nSorted name: " << name << endl;

  return 0;
}