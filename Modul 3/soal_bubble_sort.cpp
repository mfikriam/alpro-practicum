#include <iostream>
#include <string>
using namespace std;

void bubbleSort(char arr[], int length) {
  for (int i = length - 1; i >= 0; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1]) {
        char temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void printArray(char arr[], int length) {
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << "  ";
  }
  cout<< endl;
}

int main() {
  char arr1[3] = {'b', 'a', 'c'};
  char arr2[6] = {'b', 'A', 'd', 'X', 'D', 'z'};

  cout << "[Sebelum Diurutkan]" << endl;
  cout << "Array 1: ";
  printArray(arr1, 3);
  cout << "Array 2: ";
  printArray(arr2, 6);

  // Proses Pengurutan 
  bubbleSort(arr1, 3);
  bubbleSort(arr2, 6);

  cout << "\n[Setelah Diurutkan]" << endl;
  cout << "Array 1: ";
  printArray(arr1, 3);
  cout << "Array 2: ";
  printArray(arr2, 6);

  return 0;
}