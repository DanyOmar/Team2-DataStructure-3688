#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <iostream>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
	bool listaVacia(){
		return (this->primero==NULL);
	}
	public:
	    Lista(){
	    }
		Lista(Nodo *primero, Nodo *actual){
			this->primero=NULL;
			this->actual=NULL;
		}
		void insertar(int valor);
		void mostrar();
};


#endif // LISTA_H
