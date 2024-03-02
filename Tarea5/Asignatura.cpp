#include "Asignatura.h"
#include <string>
#include <iostream>
using namespace std;

Asignatura::Asignatura() {
    this->codigo = 0;
    this->nomAsignatura = "";
    this->nomAsignatura = "";
}

Asignatura::Asignatura(int codigo, string nomAsignatura) {
    this->codigo = codigo;
    this->nomAsignatura = nomAsignatura;
}

int Asignatura::getCodigo() {
    return this->codigo;
}

string Asignatura::getNomAsignatura() {
    return this->nomAsignatura;
}
