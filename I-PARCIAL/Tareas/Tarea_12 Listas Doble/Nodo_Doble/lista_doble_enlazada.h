#pragma once
#include "Nodo.h"
#include<functional>
using namespace std;
class ListaDobleEnlazada{
	public:
		ListaDobleEnlazada()=default;
		void insertar(int);
		void recorrer(std::function<void(int, int)>recorrido);
		void Borrar(Nodo *, int v);
        void BorrarLista(Nodo *);
        void insertarCola(int);
        void operacion(std::function<void(int, int)>recorrido);


	private:
		Nodo *ultimo_nodo();
		Nodo *medio_nodo();
		Nodo *cabeza=NULL;
		Nodo *cola=NULL;
		int tamanio=0;

};

