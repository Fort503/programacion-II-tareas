#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED
#include "Cliente.h"
#include "Abono.h"
#define TAMANIO 5

class Cuenta{
    private:
        int numeroCuenta;
        Cliente* cliente;
        Abono* lstAbonos[TAMANIO];
        float saldo;
        int contadorAbono;

    public:
        Cuenta() {
            this->numeroCuenta = 0;
            this->cliente = NULL;
            this->saldo = 0;
        }

        Cuenta(int numeroCuenta, Cliente* cliente) {
            this->numeroCuenta = numeroCuenta;
            this->cliente = cliente;
            float saldo = 0;
        }

        int getNumeroCuenta() {
            return this->numeroCuenta;
        }

        void setNumerocuenta(int numeroCuenta) {
            this->numeroCuenta = numeroCuenta;
        }

        Cliente* getCliente() {
            return this->cliente;
        }

        void setCliente(Cliente) {
            this->cliente = cliente;
        }

         Abono** getLstAbonos() {
            return  this->lstAbonos;
        }

        float getSaldo() {
            return this->saldo;
        }

        int getContadorAbono(){
            return this->contadorAbono;
        }

        bool agregarAbono(Abono* abono) {
            if(this->contadorAbono < TAMANIO) {
                this->lstAbonos[contadorAbono] = abono;
                this->saldo += abono->getMontoAbono();
                this->contadorAbono++;
                return true;
            }
            return false;
        }

};

#endif // CUENTA_H_INCLUDED
