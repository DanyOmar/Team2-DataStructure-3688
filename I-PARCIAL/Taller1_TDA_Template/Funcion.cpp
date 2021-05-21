/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George, 
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro 
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*/
#include<iostream>
#include "Funcion.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of <dato>::suma(Operaciones<dato> operaciones)
//Parameters:   valor1,valor2
// Return:     template
////////////////////////////////////////////////////////////////////////

template <typename dato>
dato Funcion <dato>::suma(Operaciones<dato> operaciones){
	return operaciones.getValor1()+operaciones.getValor2();
} 
////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of <dato>::resta(Operaciones<dato> operaciones)
//Parameters:   valor1,valor2
// Return:     template
////////////////////////////////////////////////////////////////////////

template <typename dato>
dato Funcion <dato>::resta(Operaciones<dato> operaciones){
	return operaciones.getValor1()-operaciones.getValor2();
} 

////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of <dato>::multiplication(Operaciones<dato> operaciones)
//Parameters:   valor1,valor2
// Return:     template
////////////////////////////////////////////////////////////////////////
template <typename dato>
dato Funcion <dato>::multiplicacion(Operaciones<dato> operaciones){
	return operaciones.getValor1()*operaciones.getValor2();
} 

////////////////////////////////////////////////////////////////////////
// Name:       <typename tipoDato>
// Purpose:    Implementation of <dato>::division(Operaciones<dato> operaciones)
//Parameters:   valor1,valor2
// Return:     template
////////////////////////////////////////////////////////////////////////

template <typename dato>
dato Funcion <dato>::division(Operaciones<dato> operaciones){
	    if(operaciones.getValor2()==0){
 		   cout<<"No se puede dividir!"<<endl;    
    }   
    return operaciones.getValor1()/operaciones.getValor2();

} 


