#include<iostream>

using namespace std;

int main() {
  string palabra = "";

  cout << "ingrese la palabra: " << endl;
  cin >> palabra;

  cout << "la palabra al reves es: ";

  for(int i = palabra.length() - 1; i >= 0; i--) {
    cout << palabra[i];
  }

  cout << endl;
}

