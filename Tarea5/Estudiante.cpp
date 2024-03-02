#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante() {
    this->codigo = 0;
    this->nombre = "";
    this->apellido = "";
}

Estudiante::Estudiante(int codigo, string nombre, string apellido) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->apellido = apellido;
}

int Estudiante::getCodigo() {
    return this->codigo;
}

string Estudiante::getNombre() {
    return this->nombre;
}

string Estudiante::getApellido() {
    return this->apellido;
}
