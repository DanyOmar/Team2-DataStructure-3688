/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 19/05/2021
			Fecha de modificaci�n: 20/05/2021
*********************************************************************/
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


