/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 01/06/2021
			Fecha de modificación: 05/06/2021

 ***********************************************************************/


#include "Operacion.h"
#include "Vector.h"
#include <iostream>
#include <conio.h>
#include <string>


Operacion::~Operacion()
{
    //dtor
}
//////////////////////////////////////////////////////////////////////////////
// Name:       Operacion()
// Purpose:    Implementation of Constructor Operacion()
// Return:
//////////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{
    //ctor
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Pascal(Vector vectorUse)
// Purpose:    Implementation of Pascal(Vector vectorUse)
// Return:     void
//////////////////////////////////////////////////////////////////////////////

void Operacion::Pascal(Vector vectorUse){

    for (int i = 1; i <= vectorUse.getDim(); i++)
	{
		int dato = 1;

		for (int j = 1; j < (vectorUse.getDim() - i + 1); j++){
			printf(" ");
		}

		for (int j = 1; j <= i; j++)
		{
			printf("%d ",dato);
			dato = dato * (i - j) / j;
		}

		printf("\n");
	}
}
