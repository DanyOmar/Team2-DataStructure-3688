#include <iostream>
#include "Nodo.h"
void Nodo::setSig(Nodo *sigui)
{
    siguiente = sigui;
}
Nodo *Nodo::getSig(void){
	return siguiente;
}
void Nodo::setVal(int val){
	valor=val;
}
int Nodo::getVal(void){
	return valor;
}
