#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

using namespace std;

class Cliente{
    private:
        int codigo;
        string nombre;
        string apellido;

    public:
        Cliente(int codigo, string nombre, string apellido) {
            this->codigo = codigo;
            this->nombre = nombre;
            this->apellido = apellido;
        }

        int getCodigo() {
            return this->codigo;
        }

        string getNombre() {
            return this->nombre;
        }

        string getApellido() {
            return this->apellido;
        }

};

#endif // CLIENTE_H_INCLUDED
