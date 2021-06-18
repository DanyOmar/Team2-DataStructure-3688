#include "lista_doble_enlazada.h"
void ListaDobleEnlazada::insertar(int valor){
	Nodo *nodo=new Nodo(valor);
	if(cabeza==NULL){
		this->cabeza=nodo;
		tamanio++;
		return;
	}
	Nodo *ultimo = ultimo_nodo();
	ultimo->setSiguiente(nodo);
	nodo->setAnterior(ultimo);
}


void ListaDobleEnlazada::insertarCola(int valor){
	Nodo *nodo=new Nodo(valor);
	if(cola==NULL){
		this->cola=nodo;
		//tamanio++;
		return;
	}
	Nodo *ultimo = ultimo_nodo();
	ultimo->setSiguiente(nodo);
	nodo->setAnterior(ultimo);
}

void ListaDobleEnlazada::recorrer(std::function<void(int, int)>recorrido){
	Nodo *tmp=cabeza;
	int indice=0;
	while(tmp!=NULL){
		recorrido(tmp->getValor(),indice++);
		tmp=tmp->getSiguiente();
	}
}


Nodo *ListaDobleEnlazada::ultimo_nodo(){
	Nodo *tmp=cabeza;
	while(tmp->getSiguiente()!=NULL){
		tmp=tmp->getSiguiente();
	}
	return tmp;
}




