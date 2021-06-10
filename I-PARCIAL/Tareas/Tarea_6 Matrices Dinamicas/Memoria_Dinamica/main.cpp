/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 03/06/2021
			Fecha de modificaci�n: 03/06/2021
*********************************************************************/
#include <iostream>
#include "Matriz.cpp"

using namespace std;

int main()
{
    Matriz <int> matriz;
    int dimension;
    int** matriz1;
    int** matriz2;
    int** matrizr;

    matriz1 = new int*();
    do {
        cout << "Ingrese una dimension" << endl;
        cin >> dimension;
    } while (dimension <= 1);


    matriz1=matriz.memoria(dimension);
    matriz.ingreso(matriz1, dimension);

    matriz2=matriz.memoria(dimension);
    matriz.ingreso(matriz2, dimension);

    matrizr = matriz.memoria(dimension);
    matriz.encerar(matrizr,dimension);

    matriz.proceso(matriz1, matriz2, matrizr, dimension);
    matriz.imprimir(matrizr, dimension);


}
