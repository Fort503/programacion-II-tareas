#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED

#include <string.h>
#include <iostream>

using namespace std;

class Asignatura{
    private:
        int codigo;
        string nomAsignatura;

    public:
        Asignatura();
        Asignatura(int, string);
        int getCodigo();
        string getNomAsignatura();
};


#endif // ASIGNATURA_H_INCLUDED
