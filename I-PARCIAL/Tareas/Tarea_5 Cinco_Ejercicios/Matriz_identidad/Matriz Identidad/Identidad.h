/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 01/06/2021
			Fecha de modificación: 05/06/2021

 ***********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Identidad {
private:
    float **matriz;
    float *matriz1;
    float elemento;
    float coeficiente;
    float *vector;
    float **respuesta;
public:
    float* inicializar1(int);
    float** inicializar(int);
    float** encerar(int,float**);
    float* encerar1(int,float*);
    float** ingresarNumeros(int,float**);
    float** calcularInversa(int,float**);
    float** multiplicar(int,float**,float**);
    void mostrarInversa(int,float**);
    void mostrar(int,float**);
};
