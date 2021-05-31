/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Tema: Arreglo estático
			Fecha de creación: 28/05/2021
			Fecha de modificación: 28/05/2021
*/

#include<iostream>
#include "Vector.h"
template <typename tipoDato>
Vector<tipoDato>::Vector(tipoDato vec[10]){
	for(int i = 0;i < 10;i++){
		vect [i] = vect [i];
	}
}
template <typename tipoDato>
void Vector<tipoDato>::set_vect(tipoDato vec[10]){
	for(int i=0;i<10;i++){
		vect[i] = vec[i];
	}
}
template <typename tipoDato>
tipoDato *Vector<tipoDato>::get_vect(){
	return vect;
}
