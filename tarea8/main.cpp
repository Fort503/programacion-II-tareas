#include <iostream>
#include "Cliente.h"
#include "Abono.h"
#include "cuenta.h"
#include "Fecha.h"

#define TAMANIO 5

int mostrarMenu() {
    int opcion = 0;

    cout << "seleccione la accion a realizar: " << endl;
    cout << "1. Agregar clientes" << endl;
    cout << "2. Agregar cuenta a la lista." << endl;
    cout << "3. Hacer abonos" << endl;
    cout << "4. Mostrar lista de clientes" << endl;
    cout << "5. Mostrar lista de cuentas" << endl;
    cout << "6.  Mostrar detalles de la cuenta" << endl;
    cout << "7. Salir" << endl;

    cin >> opcion;
    return opcion;
}

Cliente* agregarCliente() {
    int codigo;
    string nombre, apellido;

    cout << "digite el codigo del cliente" << endl;
    cin >> codigo;

    cout << "digite el nombre del cliente" << endl;
    cin >> nombre;

    cout << "digite el apellido del cliente" << endl;
    cin >> apellido;

    Cliente* cliente = new Cliente(codigo, nombre, apellido);
    return cliente;
}

Cliente* buscarCliente(Cliente lista[], int contador, int codigoBuscado) {
    Cliente* cliente = NULL;
    for(int i = 0; i < contador; i++) {
        if(lista[i].getCodigo() == codigoBuscado) {
            Cliente cliente = lista[i];
        }
    }
        return cliente;
}

Cuenta* buscarCuenta(Cuenta lista[], int contador, int codigoBuscado) {
    Cuenta* cuenta = NULL;
    for(int i = 0; i < contador; i++) {
        if(lista[i].getNumeroCuenta() == codigoBuscado) {
            cuenta = lista[i];
        }
    }
        return cuenta;
}

Cuenta* agregarCuenta(Cliente listaCliente[], int contadorCliente) {
    int noCuenta, codigoCliente;
    Cuenta* cuenta = NULL;
    Cliente* cliente = NULL;

    cout << "digite el codigo del cliente" << endl;
    cin >> codigoCliente;

    cliente = buscarCliente(listaCliente, contadorCliente, codigoCliente);

    if(cliente != NULL) {
        cout << "ingrese el numero de cuenta";
        cin >> noCuenta;
        Cuenta* cuenta = new Cuenta(noCuenta, cliente);
        cout << "cuenta agregada con exito" << endl;
    } else {
        cout << "Cliente no encontrado";
    }

    return cuenta;

}



Abono* agregarAbono(Cliente listaDeClientes[], int contadorClientes, Cuenta listaDeCuentas[], int contadorDeCuentas) {
    int codigoCuenta, codigoProducto, dia, mes, anio;
    float montoAbono;
    Fecha* fechaAbono = NULL;
    Cliente* cliente = NULL;
    Cuenta* cuenta = NULL;
    Abono* abono = NULL;

    cout << "digite el codigo de la cuenta: " << endl;
    cin >> codigoCuenta;

    cuenta = buscarCuenta(listaDeCuentas, contadorDeCuentas, codigoCuenta);
    if(cuenta != NULL) {
        cout << "digite el dia del abono" << endl;
        cin >> dia;
        cout << "digite el mes del abono" << endl;
        cin >> mes;
        cout << "digite el anio del abono" << endl;
        cin >> anio;

        fechaAbono = new Fecha(dia, mes, anio);

        cout << "digite e monto del abono";
        cin >> montoAbono;

        abono = new Abono(fechaAbono, montoAbono);
        cuenta->agregarAbono(abono);

    }
        return abono;
}

void mostrarListaDeClientes(Cliente* lista[], int contador) {
    if(contador != 0) {
        cout << "Codigo\tNombre\tApellido" << endl;
        for(int i = 0; i < contador; i++) {
            cout << lista[i]->getCodigo() << "\t";
            cout << lista[i]->getNombre() << "\t";
            cout << lista[i]->getApellido() << "\n";
        }
    } else {
        cout << "la lista de los clientes esta vacia";
    }
}

void mostrarListaDeCuentas (Cuenta* lista[], int contador) {
    if(contador != 0) {
        cout << "no\tSaldo" << endl;
        for(int i = 0; i < contador; i++) {
            cout << lista[i]->getNumeroCuenta() << "\t";
            cout << lista[i]->getSaldo() << "\t";
        }
    } else {
        cout << "la lista de los clientes esta vacia";
    }
}

void mostrarDetalles(Cuenta* listaCuenta[], int contador, int noCuenta) {
    Cuenta* cuenta = buscarCuenta(listaCuenta, contador, noCuenta);
    if(cuenta->getNumeroCuenta() != 0) {
        cout << "Cliente: " << cuenta->getCliente()->getNombre() << " " << cuenta->getCliente()->getApellido() << endl;
        cout << "Saldo: " << cuenta->getSaldo() << endl;
        if(cuenta != NULL) {
            cout << "Productos: " << endl;
            cout << "Fecha\tMonto\t";
            Abono** abonos = cuenta->getLstAbonos();
            for(int i = 0; i < cuenta->getContadorAbono(); i++) {
                abonos[i]->getFechaAbono()->mostrarFecha();
                cout << endl;
                cout << abonos[i]->getMontoAbono();
            }

        }
    } else {
        cout << "cuenta no encontrada";
    }
}



int main()
{
    int opcion, contadorClientes = 0, contadorDeCuentas = 0, contadorDeAbonos = 0;
    Cliente* listaDeClientes[TAMANIO];
    Cuenta* listaDeCuentas[TAMANIO];
    Abono* listaDeAbonos[TAMANIO];

    do {
        system("cls");
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                if (contadorClientes < TAMANIO) {
                    Cliente* cliente = agregarCliente();
                    listaDeClientes[contadorClientes] = cliente;
                    contadorClientes++;
                    cout << "El cliente se ha agregado exitosamente" << endl;
                } else {
                   cout << "la lista de clientes esta llena" << endl;
                }
                break;
            case 2:
                if (contadorDeCuentas < TAMANIO) {
                    Cuenta* cuenta = agregarCuenta(listaDeClientes, contadorClientes);
                    listaDeCuentas[contadorDeCuentas] = cuenta;
                    contadorDeCuentas++;
                    cout << "La cuenta se ha agregado exitosamente" << endl;
                } else {
                   cout << "la lista de cuentas esta llena" << endl;
                }
                break;
            case 3:
                if(contadorDeAbonos < TAMANIO) {
                    Abono* abono = agregarAbono(*listaDeClientes, contadorClientes, *listaDeCuentas, contadorDeCuentas);

                    if(abono != NULL) {
                        listaDeAbonos[contadorDeAbonos] = abono;
                        contadorDeAbonos++;
                        cout << "el abono se registro con exito" << endl;
                    } else {
                        cout << "la lista de abonos esta llena" << endl;
                    }
                }
                break;
            case 4:
                mostrarListaDeClientes(listaDeClientes, contadorClientes);
                break;
            case 5:
                mostrarListaDeCuentas(listaDeCuentas, contadorDeCuentas);
                break;
            case 6:
                int noCuenta;
                cout << "Digita el numero de la cuenta" << endl;
                cin >> noCuenta;
                mostrarDetalles(listaDeCuentas, contadorDeCuentas, noCuenta);
                break;
            case 7:
                break;
            default:
                break;
        }
        system("pause");
    } while(opcion != 7);
    return 0;
}
