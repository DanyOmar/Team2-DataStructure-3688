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
        Lista(){
            this->primero=NULL;
            this->actual=NULL;
        }

        bool ListaVacia(){
            return(this->primero==NULL);
        }

        void insertar(int val){
            Nodo *nuevo=new Nodo(val);//asigno elemento
            if(ListaVacia()){
                this->primero=nuevo;//asigno a primero cuando esta vacio
            }else{
                this->actual->siguiente=nuevo;//la direecion de nuevo se va a siguiente
            }
            this->actual=nuevo;
        }
        void mostrar(){
            Nodo *tmp=this->primero;
            while(tmp){
                printf("%d -> ",tmp->valor);
                tmp=tmp->siguiente;
            }
            printf("NULL\n");
        }

         ~Lista();

};

#endif // LISTA_H
