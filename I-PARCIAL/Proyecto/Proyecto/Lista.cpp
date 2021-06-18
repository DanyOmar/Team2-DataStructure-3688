#include "Lista.h"
#include <iostream>
#include "Nodo.h"
using namespace std;

Nodo *nuevo;

void Lista::insertar(int val){
        nuevo=new Nodo(val);
		if(listaVacia()){
			this->primero=nuevo;
		}
		else{
			this->actual->siguiente=nuevo;
		}
		this->Sactual=nuevo;

}
void Lista::mostrar(){
        nuevo=this->primero;
		while(nuevo){
			cout<<nuevo->getVal()<<"->";
			nuevo=nuevo->siguiente;
		}
		cout<<"NULL\n";
}
