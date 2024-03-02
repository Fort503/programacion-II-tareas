#include<iostream>

using namespace std;

int main() {
  int numero = 0;
  cout << "ingresa el numero: " << endl;
  cin >> numero;

  if((numero % 2) == 0) {
    cout << "el numero " << numero << " es par" << endl;
  } else {
    cout << "el numero " << numero << " es impar" << endl << endl;
  }

  return 0;
}
