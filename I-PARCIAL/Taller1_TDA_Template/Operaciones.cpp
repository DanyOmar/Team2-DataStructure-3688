/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*********************************************************************/
#pragma once
#include<iostream>
#include "Operaciones.h"

using namespace std;

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::suma(){
    return valor1+valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::resta(){
    return valor1-valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::multiplicacion(){
    return valor1*valor2;
}

template <typename tipoDato>
tipoDato Operaciones<tipoDato>::division(){
    if(valor2==0){
 		   cout<<"No se puede dividir!"<<endl;    
    }   
    return valor1/valor2;
}

