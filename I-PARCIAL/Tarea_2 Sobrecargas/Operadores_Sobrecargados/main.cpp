/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

 ***********************************************************************/
#include <iostream>
#include "Datos.h"
#include "Operaciones.h"

using namespace std;

int main()
{
    Datos datos;
    float datoUse;

    printf("Ingrese valor 1: ");
    scanf("%f",&datoUse);
    datos.setValor1(datoUse);
    printf("Ingrese valor 2: ");
    scanf("%f",&datoUse);
    datos.setValor2(datoUse);
    //printf("Ingrese valor 3: ");
    //scanf("%f",&datoUse);
    //datos.setValor3(datoUse);
    //printf("Ingrese valor 4: ");
    //scanf("%f",&datoUse);
    //datos.setValor4(datoUse);

    Operaciones operaciones;


    printf("\nSuma de 2 numeros : %.2f \n",operaciones.operator+(datos));
    printf("\Resta de 2 numeros : %.2f \n",operaciones.operator-(datos));
    printf("\Multiplicacion de 2 numeros : %.2f \n",operaciones.operator*(datos));


    return 0;
}
