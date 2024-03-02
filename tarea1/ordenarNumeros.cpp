#include<iostream>

using namespace std;

void intercambiarNumeros(int& numeroUno, int& numeroDos) {
  int aux = numeroUno;
  numeroUno = numeroDos;
  numeroDos = aux;
}

int main() {
  int numeroUno = 0;
  int numeroDos = 0;
  int numeroTres = 0;

  cout << "ingresa el primer numero" << endl;
  cin >> numeroUno;

  cout << "ingresa el numero dos" << endl;
  cin >> numeroDos;

  cout << "ingresa el numero tres" << endl;
  cin >> numeroTres;

  if(numeroUno < numeroDos) {
    intercambiarNumeros(numeroUno, numeroDos);
  }

  if(numeroDos < numeroTres) {
    intercambiarNumeros(numeroDos, numeroTres);
  }

  if(numeroUno < numeroDos) {
    intercambiarNumeros(numeroUno, numeroDos);
  }

  cout << "lista de numeros ordenados: " << numeroUno << ", " << numeroDos << ", " << numeroTres;

  return 0;
}
