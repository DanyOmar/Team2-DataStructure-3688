/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George, 
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro 
			Fecha de creación: 19/05/2021
			Fecha de modificación: 20/05/2021
*/
#include <iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include"Funcion.cpp"
using namespace std;

int main() {
	float valor1, valor2;
	Operaciones<float> operaciones;
	cout<<"Ingrese el valor [1]: "<<endl;
	cin>>valor1;
	operaciones.setValor1(valor1);
	cout<<"Ingrese el valor [2]: "<<endl;
	cin>>valor2;
	operaciones.setValor2(valor2);
	Funcion<float> funcion;
	cout <<"Suma: "<<funcion.suma(operaciones)<<endl;
	cout <<"Resta: "<<funcion.resta(operaciones)<<endl;
	cout <<"Multiplicación: "<<funcion.multiplicacion(operaciones)<<endl;
	cout <<"División: "<<funcion.division(operaciones)<<endl;
	return 0;
}



