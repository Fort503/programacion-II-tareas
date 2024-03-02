#include "Inscripcion.h"
using namespace std;
#define NUMASIG 5

Inscripcion::Inscripcion() {
    this->idInscripcion = 0;
    this->estudiante = Estudiante();
    this->cicloAcademico = "";
    this->contAsig = 0;
}

Inscripcion::Inscripcion(int id, Estudiante estudiante, string cicloAcademico) {
    this->idInscripcion = id;
    this->estudiante = estudiante;
    this->cicloAcademico = cicloAcademico;
    this->contAsig = 0;
}

void Inscripcion::agregarAsignatura(Asignatura asignatura) {
    if(this->contAsig < NUMASIG) {
        this->materiasInscritas[this->contAsig] = asignatura;
        this->contAsig++;
    } else {
        cout << "se ha alcanzado el maximo de asignaturas";
    }
}

Asignatura* Inscripcion::getMateriasInscritas() {
    return this->materiasInscritas;
}

int Inscripcion::getContAsig() {
    return this->contAsig;
}

int Inscripcion::getIdInscripcion() {
    return this->idInscripcion;
}

Estudiante Inscripcion::getEstudiante() {
    return this->estudiante;
}

string Inscripcion::getCicloAcademico() {
    return this->cicloAcademico;
}
