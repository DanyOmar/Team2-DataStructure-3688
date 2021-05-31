/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Tema: Arreglo est�tico
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 28/05/2021
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
