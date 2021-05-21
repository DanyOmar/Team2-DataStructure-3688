<<<<<<< HEAD
/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George, 
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro 
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*/
=======
/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*********************************************************************/
#pragma once
>>>>>>> 8cb3862a5333f9b052f7f51f2d9b1e74d6792e9c
#include<iostream>
#include "Operaciones.h"

using namespace std;

template <typename tipoDato>
Operaciones<tipoDato>::Operaciones(){
}
template <typename tipoDato>
void Operaciones<tipoDato>::setValor1(tipoDato val_1){
	valor1=val_1;
}
template <typename tipoDato>
void Operaciones<tipoDato>::setValor2(tipoDato val_2){
	valor2=val_2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor1(){
	return valor1;
}
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor2(){
	return valor2;
}



