#include <iostream>
#include "Lista.h"


using namespace std;

int main()
{
    Lista lst;
    int valor,dim;
	dim = lst.ingreso("\nIngrese El Tamaño:");
	for(int i=0;i<dim;i++){
        valor = lst.ingreso("\nIngrese el dato entero:");
        lst.insertar(valor);
	}
    printf("\n");
    lst.mostrar();

    return 0;
}
