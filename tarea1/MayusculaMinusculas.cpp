#include<iostream>

using namespace std;

int main() {
  string palabra;

  cout << "ingrese la palabra" << endl;
  cin >> palabra;

  for(char& caracter : palabra) {
    if(caracter >= 'a' && caracter <= 'z') {
      caracter = caracter - ('a' - 'A');
    }
  }
  cout << "la palabra en mayuscula es: " << palabra << endl;

  for(char& caracter : palabra) {
    if(caracter >= 'A' && caracter <= 'Z') {
      caracter = caracter - ('A' - 'a');
    }
  }

  cout << "la palabra en minuscula es: " << palabra << endl;

  return 0;
}
