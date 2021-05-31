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
template <typename tipoDato>
class Operaciones{
	public:
		Operaciones();
		void encerar(tipoDato[]);
		void ingresar(tipoDato[]);
		float procesar(tipoDato[]);
		void imprimir(tipoDato[]);
};

