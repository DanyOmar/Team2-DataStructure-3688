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
#include "Operaciones.h"
#include<stdlib.h>

using namespace std;


template <typename tipoDato>
Operaciones<tipoDato>::Operaciones(){
}
template <typename tipoDato>
void Operaciones<tipoDato>::encerar(tipoDato vec[10]){
	for(int i =0;i<10;i++){
		vec[i] = 0;
	}
}
template <typename tipoDato>
void Operaciones<tipoDato>::ingresar(tipoDato vec[10]){
	for(int i =0;i<10;i++){
		vec[i] = rand()%11;
	}
}
template <typename tipoDato>
float Operaciones<tipoDato>::procesar(tipoDato vec[10]){
	float promedio = 0.0f;
	for(int i =0;i<10;i++){
		promedio += vec[i];
	}
	return promedio/10.0f;
}
template <typename tipoDato>
void Operaciones<tipoDato>::imprimir(tipoDato vec[10]){
	for(int i =0;i<10;i++){
		cout<<vec[i]<<endl;
	}
}
