#include<iostream>

using namespace std;

bool verificarNumero(int numero) {
  int sumatoria = 0;

  for(int i = 1; i <= numero / 2; i++) {
    if((numero % i) == 0) {
      sumatoria += i;
    }
  }

  return(sumatoria == numero);
}


int main() {
  int numero;

  cout << "ingrese el numero: " << endl;
  cin >> numero;

  if(verificarNumero(numero)) {
    cout << "el numero " << numero << " es un numero perfecto";
  } else {
    cout << "el numero " << numero << " no es un numero perfecto";
  }

  return 0;
}
