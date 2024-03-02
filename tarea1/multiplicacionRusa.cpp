#include<iostream>

using namespace std;

int multiplicar(int numeroUno, int numeroDos) {
  int resultado = 0;

  while(numeroUno > 0) {
    if(numeroUno % 2 != 0) {
      resultado += numeroDos;
    }

    numeroUno = numeroUno / 2;
    numeroDos = numeroDos * 2;
  }
  
  return resultado;
}

int main() {
  int numeroUno;
  int numeroDos;
  int resultado = 0;

  cout << "ingresa el numero uno: " << endl;
  cin >> numeroUno;

  cout << "igresa el numero dos: " << endl;
  cin >> numeroDos;

  resultado = multiplicar(numeroUno, numeroDos);
  cout << "el resultado de la multiplicación es: " << resultado;


  return 0;
}
