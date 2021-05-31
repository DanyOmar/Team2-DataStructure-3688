/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 31/05/2021

 ***********************************************************************/

#include "Operaciones.h"
#include "Datos.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Operaciones()
// Purpose:    Implementation of Operaciones::Operaciones()
// Return:
////////////////////////////////////////////////////////////////////////

Operaciones::Operaciones()
{
}


float  Operaciones::operator + (Datos datos){
    return datos.getValor1()+datos.getValor2();

}

float  Operaciones::operator - (Datos datos){
    return datos.getValor1()-datos.getValor2();

}

float  Operaciones::operator * (Datos datos){
    return datos.getValor1()*datos.getValor2();

}



////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::~Operaciones()
// Purpose:    Implementation of Operaciones::~Operaciones()
// Return:
////////////////////////////////////////////////////////////////////////

Operaciones::~Operaciones()
{
   // TODO : implement
}
