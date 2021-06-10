#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

class Lista
{
    private:
        Nodo *primero;
        Nodo *actual;

    public:
        Lista();
        bool ListaVacia();
        void insertar(int val);
        void mostrar();
        Nodo* getPrimero(void);
        void setPrimero(Nodo*);
        Nodo* getActual(void);
        void setActual(Nodo*);
        int ingreso(char *);

         ~Lista();

};

#endif // LISTA_H
