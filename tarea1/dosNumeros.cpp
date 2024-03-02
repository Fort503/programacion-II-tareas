#include<iostream>

using namespace std;

int main() {
  int numeroUno = 0;
  int numeroDos = 0;

  cout << "ingresa el primer numero: " << endl;
  cin >> numeroUno;

  cout << "ingresa el numero dos: " << endl;
  cin >> numeroDos;

  if(numeroUno > numeroDos) {
    cout << "la lista de numeros de mayor a menor es: " << numeroUno << ", " << numeroDos;
  } else if(numeroDos > numeroUno) {
    cout << "la lista de numeros de mayor a menor es: " << numeroDos << ", " << numeroUno; 
  } else {
    cout << "los dos numeros son iguales";
  }

  return 0;
}
