/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 03/06/2021
			Fecha de modificación: 03/06/2021
*********************************************************************/

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<iostream>
#include "Matriz.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Constructor Matriz<T>::Matriz()
//Parameters:   T
// Return:
////////////////////////////////////////////////////////////////////////
template <typename T>
Matriz<T>::Matriz() {

}

//////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Constructor Matriz<T>::Matriz(T** MatrizUse, T newDimension)
//Parameters:   T
// Return:     template
///////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
Matriz<T>::Matriz(T** MatrizUse, T newDimension) {
	filaColumna = MatrizUse;
	dimension = newDimension;
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Matriz<T>::ingreso(T** MatrizUse, int d)
//Parameters:   T
// Return:     void
///////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Matriz<T>::ingreso(T** MatrizUse, int d) {
	cout << "Ingrese los elementos de la matriz:" << endl;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			cin>> (*(*(MatrizUse + i) + j));
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Matriz<T>::imprimir(T** MatrizUse, int d)
//Parameters:   T
// Return:     void
///////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Matriz<T>::imprimir(T** MatrizUse, int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			printf("%d", *(*(MatrizUse + 1) + j));
			printf("%*s", j + 5, "");
		}
		printf("\n");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Matriz<T>::encerar(T** MatrizUse, int d)
//Parameters:   T
// Return:     void
///////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Matriz<T>::encerar(T** MatrizUse, int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			*(*(MatrizUse + i) + j) = 0;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Matriz<T>::proceso(T** MatrizUse1, T** MatrizUse2, T** MatrizUseR, int d)
//Parameters:   T
// Return:     void
//////////////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
void Matriz<T>::proceso(T** MatrizUse1, T** MatrizUse2, T** MatrizUseR, int d) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < d; j++) {
			for (int h = 0; h < d; h++) {
				*(*(MatrizUseR + i) + j) = *(*(MatrizUseR + i) + j) + (*(*(MatrizUse1 + i) + h)) * (*(*(MatrizUse2 + h) + j));
			}
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
// Name:       <typename T>
// Purpose:    Implementation of Matriz<T>::encerar(T** MatrizUse, int d)
//Parameters:   T
// Return:     mat
///////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
T** Matriz<T>::memoria(int d) {
	int j;
	T** mat;
	mat=(T **)malloc(d*sizeof(T*));
	//mat = new T*();
	for (j = 0; j < d; j++) {
		*(mat + j) = (T*)malloc (d * sizeof(T));
	}
	return mat;
}
