#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    Fecha miFecha(29, 02, 2023);
    miFecha.mostrarDatos();

    if(miFecha.validarFecha() == true) {
        cout << "Fecha valida";
    } else {
        cout << "Fecha no valida";
    }

    return 0;
}
