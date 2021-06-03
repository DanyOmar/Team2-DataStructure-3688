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


    printf("\nLa Suma de 2 numeros es: %.2f ",operaciones.operator+(datos));
    printf("\nLa Resta de 2 numeros es: %.2f ",operaciones.operator-(datos));
    printf("\nLa Multiplicacion de 2 numeros es: %.2f \n",operaciones.operator*(datos));

    printf("\nEl Mayor de 2 numeros es: %.2f ",operaciones.operator >(datos));
    printf("\nEl Menor de 2 numeros es: %.2f ",operaciones.operator <(datos));
    bool verificar = operaciones.operator ==(datos);
    if (verificar == false)
        printf("\nLos numeros No son iguales!!\n");
    else
        printf("\nLos numeros son iguales!!\n");

    printf("\nLa Division de 2 numeros es: %.2f ",operaciones.operator /(datos));
    printf("\nSumar un numero al primer numero ingresado: %.2f",operaciones.operator += (datos));
    printf("\nRestar un numero al primer numero ingresado: %.2f\n",operaciones.operator -= (datos));

    printf("\nEl Mayor o igual de 2 numeros es: %.2f ",operaciones.operator >=(datos));
    printf("\nEl Menor o igual de 2 numeros es: %.2f ",operaciones.operator <=(datos));

    bool verificarUse = operaciones.operator !=(datos);
    if (verificar == false)
        printf("\nLos numeros No son iguales!!\n");
    else
        printf("\nLos numeros son iguales!!\n");


    return 0;
}
