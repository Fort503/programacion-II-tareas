#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string.h>
using namespace std;
    class Persona {
        protected:
            int codigo;
            string nombre;
            string apellido;

        public:
            Persona() {
                this->codigo = 0;
                this->nombre = "";
                this->apellido = "";
            }

            Persona(int codigo, string nombre, string apellido) {
                this->codigo = codigo;
                this->nombre = nombre;
                this->apellido = apellido;
            }

            string getNombre() {
                return this->nombre;
            }
    };


#endif // PERSONA_H_INCLUDED
