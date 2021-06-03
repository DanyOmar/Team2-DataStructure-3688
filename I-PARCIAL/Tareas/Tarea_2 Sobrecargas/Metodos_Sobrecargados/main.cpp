/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

 ***********************************************************************/

#include <iostream>
#include <Operaciones.h>
#include <Datos.h>
using namespace std;

int main()
{
    float datoUse;

    Datos datos;

    printf("Ingrese valor 1: ");
    scanf("%f",&datoUse);
    datos.setValor1(datoUse);
    printf("Ingrese valor 2: ");
    scanf("%f",&datoUse);
    datos.setValor2(datoUse);
    printf("Ingrese valor 3: ");
    scanf("%f",&datoUse);
    datos.setValor3(datoUse);
    printf("Ingrese valor 4: ");
    scanf("%f",&datoUse);
    datos.setValor4(datoUse);

    Operaciones operaciones;
    //Suma
    printf("\nSuma de 2 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2()));
    printf("Suma de 3 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Suma de 4 numeros : %.2f \n",operaciones.Suma(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));

    //Resta
    printf("\nResta de 2 numeros : %.2f \n",operaciones.Resta(datos.getValor1(),datos.getValor2()));
    printf("Resta de 3 numeros : %.2f \n",operaciones.Resta(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Resta de 4 numeros : %.2f \n",operaciones.Resta(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));

    //Multiplicacion
    printf("\nMultiplicacion de 2 numeros : %.2f \n",operaciones.Multiplicacion(datos.getValor1(),datos.getValor2()));
    printf("Multiplicacion de 3 numeros : %.2f \n",operaciones.Multiplicacion(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Multiplicacion de 4 numeros : %.2f \n",operaciones.Multiplicacion(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));

    //Numero Mayor
    printf("\nMayor de 2 numeros : %.2f \n",operaciones.Mayor(datos.getValor1(),datos.getValor2()));
    printf("Mayor de 3 numeros : %.2f \n",operaciones.Mayor(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Mayor de 4 numeros : %.2f \n",operaciones.Mayor(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));

    //Numero Menor

    printf("\nMenor de 2 numeros : %.2f \n",operaciones.Menor(datos.getValor1(),datos.getValor2()));
    printf("Menor de 3 numeros : %.2f \n",operaciones.Menor(datos.getValor1(),datos.getValor2(),datos.getValor3()));
    printf("Menor de 4 numeros : %.2f \n",operaciones.Menor(datos.getValor1(),datos.getValor2(),datos.getValor3(),datos.getValor4()));





    return 0;
}
