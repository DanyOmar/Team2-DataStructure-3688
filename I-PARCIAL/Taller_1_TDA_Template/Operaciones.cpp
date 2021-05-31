/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*********************************************************************/
#include<iostream>
#include "Operaciones.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of Constructor(Operaciones<tipoDato>::Operaciones)
//Parameters:   tipoDato
// Return:     template
////////////////////////////////////////////////////////////////////////
template <typename tipoDato>
Operaciones<tipoDato>::Operaciones(){
}
////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Set <dato>(Operaciones<dato> operaciones)
//Parameters:   valor1
// Return:     val_1
////////////////////////////////////////////////////////////////////////
template <typename tipoDato>
void Operaciones<tipoDato>::setValor1(tipoDato val_1){
	valor1=val_1;
}
////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Set <dato>(Operaciones<dato> operaciones)
//Parameters:   valor2
// Return:     val_2
////////////////////////////////////////////////////////////////////////
template <typename tipoDato>
void Operaciones<tipoDato>::setValor2(tipoDato val_2){
	valor2 = val_2;
}
////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Get<dato>(Operaciones<dato> operaciones)
//Parameters:   valor1
// Return:     valor1
////////////////////////////////////////////////////////////////////////
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor1(){
	return valor1;
}
////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of Get<dato>(Operaciones<tipoDato>:Operaciones)
//Parameters:   valor2
// Return:     valor2
////////////////////////////////////////////////////////////////////////
template <typename tipoDato>
tipoDato Operaciones<tipoDato>::getValor2(){
	return valor2;
}



