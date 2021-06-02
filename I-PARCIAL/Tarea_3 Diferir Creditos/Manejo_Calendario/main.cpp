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
