/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 01/06/2021
			Fecha de modificaci�n: 06/06/2021

 ***********************************************************************/

#include <iostream>
#include "Operacion.h"
#include "Vector.h"
using namespace std;


int main()
{
    Operacion operacion;
    Vector vectorUse;
    int numero;
    Operacion dato;
    printf("Proporciona el n�mero de filas del tri�ngulo: ");
	scanf("%d",&numero);
	vectorUse.setDim(numero);
    operacion.Pascal(vectorUse);

    return 0;
}


