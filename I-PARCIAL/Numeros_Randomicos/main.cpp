/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Tema: Arreglo est�tico
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 28/05/2021
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
