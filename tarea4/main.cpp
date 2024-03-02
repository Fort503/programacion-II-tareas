#include <iostream>
#include "Trabajador.h"
#define TAM 5

using namespace std;

void pausar() {
    cout << "presiona una tecla para continuar..." << endl;
    getchar();
    cin.ignore();
}

int menu() {
    int opcion = 0;

    cout << "*********************" << endl;
    cout << "* menu de opciones  *" << endl;
    cout << "*********************" << endl;
    cout << "1. Agregar empleado" << endl;
    cout << "2. mostrar planilla" << endl;
    cout << "3. salir" << endl;
    cin >> opcion;
    system("clear");
    return opcion;
}

Trabajador agregarEmpleado() {
    int codigo;
    string nombre, apellido;
    float sueldoMensual;

    cout << "digite el codigo: ";
    cin >> codigo;

    cout << "digite el nombre: ";
    cin >> nombre;

    cout << "digite el apellido: ";
    cin >> apellido;

    cout << "digite el sueldo mensual: ";
    cin >> sueldoMensual;

    Trabajador trabajador(codigo, nombre, apellido, sueldoMensual);
    return trabajador;
}

void mostrarPlanilla(int contador, Trabajador lista[]) {
    if(contador == 0) {
        cout << "la planilla esta vacia";
    } else {
        cout << "cod\tNombre\tApellido\tTotal a pagar\n";
        for (int i = 0; i < contador; i++) {
            cout << lista[i].getCodigo();
            cout << "\t" << lista[i].getNombre();
            cout << "\t" << lista[i].getApellido();
            cout << "\t\t" << lista[i].getTotalPagar() << endl;
        }

    }
}

int main()
{
    int opcion = 0;
    int contador = 0;
    Trabajador planilla[TAM];

    do {
        system("clear");
        opcion = menu();

        switch(opcion) {
            case 1:
                if(contador < TAM) {
                    planilla[contador] = agregarEmpleado();
                    contador++;
                } else {
                    cout << "la planilla esta llena";
                }
                break;

            case 2:
                mostrarPlanilla(contador, planilla);
                break;

            case 3:
                break;

            default:
                cout << "opcion no valida";
                break;
        }

        pausar();

    } while(opcion != 3);
    return 0;
}
