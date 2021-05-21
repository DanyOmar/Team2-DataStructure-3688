/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*********************************************************************/
#pragma once
#include <iostream>

template <typename tipoDato>

class Operaciones{
    private: 
        tipoDato valor1;
        tipoDato valor2;
    public: 
        Operaciones(tipoDato _valor1,tipoDato _valor2){
            valor1 = _valor1;
            valor2 = _valor2;
        }
         	//setters
        	tipoDato setValor1(int _valor1){
        	valor1 = _valor1;
		}
		tipoDato setValor2(int _valor2){
			valor2= _valor2;
		}
		//getters
		tipoDato getValor1(){
			return valor1;
		}
		tipoDato getValor2(){
			return valor2;
		}
        tipoDato suma();
        tipoDato resta();
        tipoDato multiplicacion();
        tipoDato division();
};
