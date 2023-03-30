#include <iostream>
using namespace std;

const double pi = 3.14;

int main() {
  double r;
  cout << "Dairenin yaricapini girin: ";
  cin >> r;

  double alan = pi * r * r;
  double cevre = 2 * pi * r;

  cout << "Dairenin alani: " << alan << endl;
  cout << "Dairenin cevresi: " << cevre << endl;

  return 0;
}
