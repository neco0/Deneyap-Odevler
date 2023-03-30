#include <iostream>
using namespace std;

int main() {
  int sayi1, sayi2;
  cout << "Iki sayi girin: ";
  cin >> sayi1 >> sayi2;

  int result = !(sayi1 ^ sayi2);

  cout << "Sayilar esit mi? " << result << endl;

  return 0;
}
