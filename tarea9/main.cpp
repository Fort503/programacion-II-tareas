#include <iostream>
#include "Trabajador.h"

using namespace std;
#define TAM 5

int mostrarMenu() {
    int opcion = 0;

    cout << "seleccione la accion a realizar: " << endl;
    cout << "1. Agregar Trabajador" << endl;
    cout << "2. Mostrar lista de ctrabajadores." << endl;
    cout << "3. Hacer abonos" << endl;

    cin >> opcion;
    return opcion;
}

Trabajador agregarTrabajador() {
    int codigo;
    string nombre, apellido;
    float sueldoMensual;

    cout << "digite el codigo del Trabajador" << endl;
    cin >> codigo;

    cout << "digite el nombre del trabajador" << endl;
    cin >> nombre;

    cout << "digite el apellido del trabajador" << endl;
    cin >> apellido;

    cout << "digite el sueldo mensual: " << endl;
    cin >> sueldoMensual;

    Trabajador trabajador(codigo, nombre, apellido, sueldoMensual);
    return trabajador;
}

void mostrarPlanilla(int contador, Trabajador lista[]) {
    if(contador == 0) {
        cout << "la planilla esta vacia";
    } else {
        cout << "cod\tNombre\tApellido\tSueldo\n";
        for (int i = 0; i < contador; i++) {
            cout << lista[i].getCodigo();
            cout << "\t" << lista[i].getNombre();
            cout << "\t" << lista[i].getApellido();
            cout << "\t\t" << lista[i].getSueldoMensual() << endl;
        }

    }
}

int main()
{
    Trabajador listaTrabajadores[TAM];
    int opcion = 0, contadorTrabajadores = 0;
    do {
        opcion = mostrarMenu();
        switch(opcion) {
            case 1:
                if(contadorTrabajadores < 5) {
                    listaTrabajadores[contadorTrabajadores] = agregarTrabajador();
                    contadorTrabajadores++;
                    cout << "trabajador agregado satisfactoriamente";
                } else {
                    cout << "lista de trabajadores llena";
                }
                break;

            case 2:
                mostrarPlanilla(contadorTrabajadores, listaTrabajadores);
                break;

            case 3:
                break;

            default:
                cout << "opcion no valida";
                break;
        }

    } while(opcion != 3);
    return 0;
}
