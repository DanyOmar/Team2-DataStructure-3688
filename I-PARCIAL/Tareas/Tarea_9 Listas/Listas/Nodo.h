#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
    private:
        int valor;
        Nodo *siguiente;
    public:
        Nodo();
        Nodo(int val, Nodo *sig=NULL){
            this-> valor=val;
            this-> siguiente=sig;
        }

    friend class Lista;


        virtual ~Nodo();

};

#endif // NODO_H
