#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Estudiante{

    private:
        int codigo;
        string nombre;
        string apellido;

    public:
        Estudiante();
        Estudiante(int, string, string);
        int getCodigo();
        string getNombre();
        string getApellido();
};

#endif // ESTUDIANTE_H_INCLUDED
