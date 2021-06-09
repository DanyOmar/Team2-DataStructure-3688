/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 01/06/2021
			Fecha de modificación: 05/06/2021

 ***********************************************************************/
#include <iostream>
#include "identidad.h"
#include "ingreso.h"
using namespace std;

int main(){
    Ingreso dato;
    Identidad obj;
    float **matriz;
    float **inversa;
    float **respuesta;
    int dimension=0;

    matriz = obj.inicializar(dimension);
    inversa = obj.inicializar(dimension);
    respuesta = obj.inicializar(dimension);

    obj.encerar(dimension,matriz);
    obj.encerar(dimension,respuesta);
    obj.encerar(dimension,inversa);

    do{
        system("cls");
        dimension = dato.ingresarEntero("Ingrese la dimension y los elementos de la matriz: ");
    }while(dimension == 0 || dimension < 0);



    matriz = obj.ingresarNumeros(dimension,matriz);
    cout<<"Matriz ingresada: "<<endl;
    obj.mostrar(dimension,matriz);

    cout<<"\n\n\n";

    inversa = obj.calcularInversa(dimension,matriz);
    cout<<"Matriz inversa: "<<endl;
    obj.mostrarInversa(dimension,inversa);

    cout<<"\n\n\n";

    respuesta = obj.multiplicar(dimension,matriz,inversa);
    cout << "Matriz identidad: "<<endl;
    obj.mostrar(dimension,respuesta);


    system("pause");
    return 0;

}
