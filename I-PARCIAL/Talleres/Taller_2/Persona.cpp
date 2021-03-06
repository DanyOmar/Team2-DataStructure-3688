/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George, 
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro 
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*/

#include "Fecha.h"
#include "Persona.h"

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEdad()
// Purpose:    Implementation of Persona::getEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getEdad(void)
{
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEdad(int newEdad)
// Purpose:    Implementation of Persona::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEdad(int newEdad)
{
   edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getDireccion()
// Purpose:    Implementation of Persona::getDireccion()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getDireccion(void)
{
   return direccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setDireccion(std::string newDireccion)
// Purpose:    Implementation of Persona::setDireccion()
// Parameters:
// - newDireccion
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setDireccion(std::string newDireccion)
{
   direccion = newDireccion;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getId()
// Purpose:    Implementation of Persona::getId()
// Return:     long
////////////////////////////////////////////////////////////////////////

long Persona::getId(void)
{
   return id;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setId(long newId)
// Purpose:    Implementation of Persona::setId()
// Parameters:
// - newId
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setId(long newId)
{
   id = newId;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona()
// Purpose:    Implementation of Persona::Persona()
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona()
{
   fecha = NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::~Persona()
{
   // TODO : implement
}
