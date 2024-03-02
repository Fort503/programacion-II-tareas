#include<iostream>

using namespace std;

int main() {
  
  int numero = 0;

  cout << "ingrese el numero: ";
  cin >> numero;

  cout << "tabla de multiplicar de: " << numero << endl;

  for(int i = 1; i <= 10; i++) {
    cout << numero << " x " << i << " = " << (i * numero) << endl;
  }

  return 0;
}
