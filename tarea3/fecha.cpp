#include "fecha.h"

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::asignarDatos(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::mostrarDatos() {
    cout << this->dia << " - " << this->mes << " - " << this->anio << endl;
}

bool Fecha::validarFecha() {

    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(this->dia < 1 || this->mes > 12 || this->anio < 0) {
        return false;
    }

    if((this->anio % 4 == 0 && this->anio % 100 != 0) || (this->anio % 400 == 0 && this->anio % 100 == 0)) {
        diasPorMes[1] = 29;
    }

    if(this->dia > diasPorMes[this->mes - 1]) {
        return false;
    }

    return true;
}
