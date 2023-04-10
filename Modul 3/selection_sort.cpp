#include <iostream>
using namespace std;

int main() {
  int n = 4;
  int arr[n] = {7, 5, 4, 2};
  int temp;

  cout << "Sebelum Pengurutan: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "  ";
  }
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "Setelah Pengurutan: " << endl; 
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "  ";
  }

  return 0;
}