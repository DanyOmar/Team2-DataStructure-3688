/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Tema: Arreglo estático
			Fecha de creación: 28/05/2021
			Fecha de modificación: 28/05/2021
*/

#include <iostream>
#include "Operaciones.cpp"
#include "Vector.h"

using namespace std;

int main(int argc, char** argv) {
	int vec[10];
	Operaciones<int> objOperaciones;
	objOperaciones.encerar(vec);
	objOperaciones.ingresar(vec);
	objOperaciones.imprimir(vec);

	return 0;
}
