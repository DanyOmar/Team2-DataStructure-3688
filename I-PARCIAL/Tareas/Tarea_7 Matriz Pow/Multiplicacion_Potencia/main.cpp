/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 03/06/2021
			Fecha de modificaci�n: 10/06/2021
*********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Matriz.h"

using namespace std;

int main()
{
    int num;
    Matriz matriz;
    matriz.Ingresar1();
    printf("\nIngrese la Potencia:");
    scanf("%d",&num);
    matriz.Ingresar2();
    matriz.multiplicar(num);
    matriz.imprimir();
    matriz.~Matriz();

    return 0;
}
