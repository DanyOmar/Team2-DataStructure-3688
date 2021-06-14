#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "Lista.h"


////////////////////////////////////////////////////////////////////////
// Name:       Lista::Lista()
// Purpose:    Implementation of Lista::Lista()
// Return:
////////////////////////////////////////////////////////////////////////
Lista::Lista(){
    this->primero=NULL;
    this->actual=NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::ListaVacia()
// Purpose:    Implementation of Lista::ListaVacia()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Lista::ListaVacia(){
    return(this->primero==NULL);
}


////////////////////////////////////////////////////////////////////////
// Name:       Lista::insertar(int val)
// Purpose:    Implementation of Lista::insertar(int val)
// Parameters:
// - val
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::insertar(int val){
    Nodo *nuevo=new Nodo(val,NULL);//asigno elemento
    if(ListaVacia()){
        this->setPrimero(nuevo);//asigno a primero cuando esta vacio
    }else{
        this->actual->siguiente=nuevo;//la direecion de nuevo se va a siguiente
    }
    this->setActual(nuevo);
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::mostrar()
// Purpose:    Implementation of Lista::mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Lista::mostrar(){
    Nodo *tmp=this->getPrimero();
    while(tmp){
        printf("%d -> ",tmp->getValor());
        tmp=tmp->siguiente;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getPrimero()
// Purpose:    Implementation of Lista::getPrimero()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getPrimero()
{
   return primero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setPrimero(Nodo newPrimero)
// Purpose:    Implementation of Lista::setPrimero()
// Parameters:
// - newPrimero
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setPrimero(Nodo *newPrimero)
{
   this->primero = newPrimero;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::getActual()
// Purpose:    Implementation of Lista::getActual()
// Return:     Nodo*
////////////////////////////////////////////////////////////////////////

Nodo* Lista::getActual(void)
{
   return actual;
}

////////////////////////////////////////////////////////////////////////
// Name:       Lista::setActual(Nodo newActual)
// Purpose:    Implementation of Lista::setActual()
// Parameters:
// - newActual
// Return:     void
////////////////////////////////////////////////////////////////////////

void Lista::setActual(Nodo *newActual)
{
   this->actual = newActual;

}
////////////////////////////////////////////////////////////////////////
// Name:       Lista::ingreso(char *msj)
// Purpose:    Implementation of Lista::ingreso(char *msj)
//Parameters:
// - *msj
// Return:      int
////////////////////////////////////////////////////////////////////////

int Lista::ingreso(char *msj){
	char dato[5];
	char c;
	int i=0,valor;
	printf("%s",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}

	}
	dato[i]='\0';
	valor=atoi(dato);
	printf("\n");
	return valor;
}
////////////////////////////////////////////////////////////////////////
// Name:       Lista::~Lista()
// Purpose:    Implementation of Lista::~Lista()
// Return:
////////////////////////////////////////////////////////////////////////
Lista::~Lista()
{
    delete primero;
    delete actual;
}
