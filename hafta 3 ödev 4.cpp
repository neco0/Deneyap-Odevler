#include <iostream>
using namespace std;

int main() {
  int yas1, yas2, yas3;

  cout << "1. kisinin yasini giriniz: ";
  cin >> yas1;

  cout << "2. kisinin yasini giriniz: ";
  cin >> yas2;

  cout << "3. kisinin yasini giriniz: ";
  cin >> yas3;

  int toplam_yas = yas1 + yas2 + yas3;

  cout << "Uc kisinin yaslari toplami: " << toplam_yas << endl;

  return 0;
}
