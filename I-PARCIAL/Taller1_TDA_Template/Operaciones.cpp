
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



