/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

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
