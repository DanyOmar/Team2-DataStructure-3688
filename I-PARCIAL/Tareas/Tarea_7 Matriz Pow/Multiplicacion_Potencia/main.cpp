/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 03/06/2021
			Fecha de modificación: 10/06/2021
*********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <Matriz.h>

using namespace std;

int main()
{
    Matriz matriz;
    matriz.Ingresar1();
    //matriz.Ingresar2();
    matriz.multiplicar();
    matriz.imprimir();
    matriz.~Matriz();

    return 0;
}
