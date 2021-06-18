#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "matriz.h"
#include "ingreso.h"
int main(){
	
	Matriz nuevo;
	int fil,col,exp;
	Entry leer;
	fil=leer.enterokay("ingrese numero de filas :");
	col=leer.enterokay("ingrese numero de columnas :");
	exp=leer.enterokay("ingrese el exponente");
	nuevo=Matriz(fil,col);
	
	nuevo.crearMatriz();
	nuevo.llenarMatriz();
	nuevo.imprimirMatriz();
	nuevo.multiplicarMatriz(exp);
	nuevo.imprimirMatriz();
	
	return 0;
}
