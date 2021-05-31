/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Tema: Arreglo estático
			Fecha de creación: 28/05/2021
			Fecha de modificación: 28/05/2021
*/

#pragma once
#include<iostream>

using namespace std;
template <typename tipoDato>
class Vector{
	private:
		tipoDato vect[10];
	public:
		Vector(tipoDato [10]);
		Vector();
		void set_vect(tipoDato[10]);
		tipoDato *get_vect();
		//~Vector();

};

