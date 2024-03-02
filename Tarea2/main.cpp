#include <iostream>

using namespace std;

int contarLetras(char palabra[]) {
    int posicion = 0;

    while(palabra[posicion] != '\0') {
        posicion++;
    }

    return posicion;
}

char *convertirMayus(char palabra[]) {
    for(int i = 0; i <= contarLetras(palabra); i++) {
        if(palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] -= (32);
        }
    }

    return palabra;
}

char *convertirMinus(char palabra[]) {
    for(int i = 0; i <= contarLetras(palabra); i++) {
        if(palabra[i] >= 'A' && palabra[i] <= 'Z') {
            palabra[i] += (32);
        }
    }

    return palabra;
}

int main()
{
    char palabra[10] = "";
    cout << "digite la palabra que quiere transformar: " << endl;
    cin >> palabra;

    cout << "la palabra en mayusculas y minusculas es: " << endl;
    cout << convertirMayus(palabra) << endl;
    cout << convertirMinus(palabra) << endl;
    return 0;
}
