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
        Nodo(int val,Nodo*);
        int getValor(void);
        void setValor(int);
        Nodo* getSiguiente(void);
        void setSiguiente(Nodo*);



    friend class Lista;


        virtual ~Nodo();

};

#endif // NODO_H
