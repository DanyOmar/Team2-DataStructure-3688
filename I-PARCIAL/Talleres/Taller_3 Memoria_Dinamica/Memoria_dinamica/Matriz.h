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


using namespace std;
template <typename T>
class Matriz
{
private:
	T** filaColumna;
	T dimension;
public:
	Matriz();
	Matriz(T** fiCo, T newDimension);
	void ingreso(T** fiCo, int d);
	void proceso(T** fiCo1, T** fiCo2, T** fiCo3, int d);
	void imprimir(T** fiCo, int d);
	void encerar(T** fiCo, int d);
	T** memoria(int d);
	void ingreso(T** fiCo, int d);
	void proceso(T** fiCo1, T** fiCo2, T** fiCo3, int d);
	void imprimir(T** fiCo, int d);
	void encerar(T** fiCo, int d);
	T** memoria(int d);
};

