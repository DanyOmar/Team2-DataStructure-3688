/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu?a Omar, Loacham?n Johnny, Zumba Alvaro
			Fecha de creaci?n: 28/05/2021
			Fecha de modificaci?n: 01/06/2021

 ***********************************************************************/
#include <iostream>
#include <string>
#include "Datos.h"
#include "Fecha.h"


////////////////////////////////////////////////////////////////////////
// Name:       Datos::Datos()
// Purpose:    Implementation of Datos::Datos()
// Return:
////////////////////////////////////////////////////////////////////////

Datos::Datos()
{

}


////////////////////////////////////////////////////////////////////////
// Name:       Datos::getNombre()
// Purpose:    Implementation of Datos::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

string Datos::getNombre(){
   return Nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::setNombre(std::string newNombre)
// Purpose:    Implementation of Datos::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datos::setNombre(string newNombre)
{
   Nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::getCantidad()
// Purpose:    Implementation of Datos::getCantidad()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Datos::getCantidad(void)
{
   return Cantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::setCantidad(float newCantidad)
// Purpose:    Implementation of Datos::setCantidad()
// Parameters:
// - newCantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datos::setCantidad(float newCantidad)
{
   Cantidad = newCantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::getDiferido()
// Purpose:    Implementation of Datos::getDiferido()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Datos::getDiferido(void)
{
   return Diferido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Datos::setDiferido(int newDiferido)
// Purpose:    Implementation of Datos::setDiferido()
// Parameters:
// - newDiferido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Datos::setDiferido(int newDiferido)
{
   Diferido = newDiferido;
}



////////////////////////////////////////////////////////////////////////
// Name:       Datos::~Datos()
// Purpose:    Implementation of Datos::~Datos()
// Return:
////////////////////////////////////////////////////////////////////////

//Datos::~Datos()
//{
   // TODO : implement
//}
