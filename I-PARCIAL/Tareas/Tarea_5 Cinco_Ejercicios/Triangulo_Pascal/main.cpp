/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 01/06/2021
			Fecha de modificación: 06/06/2021

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
    printf("Proporciona el número de filas del triángulo: ");
	scanf("%d",&numero);
	vectorUse.setDim(numero);
    operacion.Pascal(vectorUse);

    return 0;
}


