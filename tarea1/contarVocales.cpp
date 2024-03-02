#include<iostream>

using namespace std;

int main() {

  string palabra;
  int numeroDeVocales = 0;

  cout << "ingrese la palabra: " << endl;
  cin >> palabra;

  for(char letra : palabra) {

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      numeroDeVocales++;
    }
  }

  cout << "la palabra tienes " << numeroDeVocales << " vocales";

  return 0;
}
