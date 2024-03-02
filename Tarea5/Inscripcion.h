#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#include "Estudiante.h"
#include "Asignatura.h"
#define NUMASIG 5


class Inscripcion {
    private:
        int idInscripcion;
        Estudiante estudiante;
        string cicloAcademico;
        Asignatura materiasInscritas[NUMASIG];
        int contAsig;

    public:
        Inscripcion();
        Inscripcion(int, Estudiante, string);
        int getIdInscripcion();
        int getContAsig();
        Estudiante getEstudiante();
        string getCicloAcademico();
        void agregarAsignatura(Asignatura);
        Asignatura* getMateriasInscritas();
};


#endif // INSCRIPCION_H_INCLUDED
