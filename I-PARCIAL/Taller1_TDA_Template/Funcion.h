/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George, 
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro 
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*/
#include <iostream>
#include"Operaciones.cpp"
template <typename dato>

class Funcion{
   private:
   	Operaciones<dato> operaciones;
	public:
   		dato suma(Operaciones<dato>);
   		dato resta(Operaciones<dato>);
   		dato multiplicacion(Operaciones<dato>);
   		dato division(Operaciones<dato>);
};


