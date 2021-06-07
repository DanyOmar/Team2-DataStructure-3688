/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 01/06/2021
			Fecha de modificaci�n: 05/06/2021

 ***********************************************************************/


#include "Vector.h"
#include "iostream"


//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::~Vector()
// Purpose:    Implementation of Constructor Vector::~Vector()
// Return:
//////////////////////////////////////////////////////////////////////////////
Vector::~Vector()
{
    //dtor
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::Vector()
// Purpose:    Implementation of Constructor Vector::Vector()
// Return:
//////////////////////////////////////////////////////////////////////////////
Vector::Vector()
{
    //ctor
}

//////////////////////////////////////////////////////////////////////////////
// Name:       setVector(int *vectorCopia,int posicion)
// Purpose:    Implementation of setVector(int *vectorCopia,int posicion)
// Return:     void
//////////////////////////////////////////////////////////////////////////////
void Vector::setVector(int *vectorCopia,int posicion){
    for(int i=0;i<=posicion;i++){
        if(dim==posicion)
        {
            (*vectorCopia)= (*vectorUse);
        }

    }
}
//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::getVector()
// Purpose:    Implementation of Vector::getVector()
// Return:     int*
//////////////////////////////////////////////////////////////////////////////

int* Vector::getVector(){
    return vectorUse;
}
//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::setDim(int dimUse)
// Purpose:    Implementation of Vector::setDim(int dimUse)
// Return:     void
//////////////////////////////////////////////////////////////////////////////
void Vector::setDim(int dimUse){
    dim=dimUse;
}


//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::getDim()
// Purpose:    Implementation of Vector::getDim()
// Return:     int
//////////////////////////////////////////////////////////////////////////////
int Vector::getDim(){
    return dim;
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::setPosicion(int pos)
// Purpose:    Implementation of Vector::setPosicion(int pos)
// Return:     void
//////////////////////////////////////////////////////////////////////////////
void Vector::setPosicion(int pos){
    posicion=pos;
}
//////////////////////////////////////////////////////////////////////////////
// Name:       Vector::getPosicion()
// Purpose:    Implementation of Vector::getPosicion()
// Return:     int
//////////////////////////////////////////////////////////////////////////////
int Vector::getPosicion(){
    return posicion;
}
