/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 01/06/2021

 ***********************************************************************/

#include <iostream>
#include "Datos.h"
#include "Operacion.h"

using namespace std;

int main()
{
    int diferir,valorUse;
    string nombre;
    Datos datos;


    Operacion operacion;

    do{
        printf("\nINGRESE EL PLASO DE MESES A DIFERIR: ");
        scanf("%d",&diferir);
        if(diferir<1){
            printf("\nINCORRECTO INGRESE NUEVAMENTE: ");
            scanf("%d",&diferir);
        }
    }while(diferir<1);

    do{
        printf("\nINGRESE EL VALOR DEL CREDITO: ");
        scanf("%d",&valorUse);
        if(diferir<1){
            printf("\nINCORRECTO INGRESE NUEVAMENTE: ");
            scanf("%d",&valorUse);
        }
    }while(valorUse<1);

    printf("\nINGRESE SUS NOMBRES: ");
    cin >> nombre;
    //cout <<  nombre << endl;

    datos.setNombre(nombre);
    datos.setCantidad(valorUse);
    datos.setDiferido(diferir);
    Fecha fecha;

    operacion.Calendario(datos,fecha);
    //operacion.Imprimir(datos);


    return 0;
}
