#include <iostream>
using namespace std;

float meterToCentimeter(float meter) {
  return meter * 100;
}

float meterToKilometer(float meter) {
  return meter / 1000;
}

void konversiMeter(float meter) {
  cout << meter << "m = " << meterToCentimeter(meter) << "cm" << endl;
  cout << meter << "m = " << meterToKilometer(meter) << "km" << endl;
}

int main() {
  float jarak = 220;
  konversiMeter(jarak);

  return 0;
}