#include <iostream>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include "Operaciones.cpp"

using namespace std;

int main(int argc, char** argv) {
	float valor1, valor2;
	cout<<"Ingrese el valor [1]: "<<endl;
	cin>>valor1;
	cout<<"Ingrese el valor [2]: "<<endl;
	cin>>valor2;
	Operaciones<float>operacion(valor1,valor2);
	cout<<"Suma: "<<operacion.suma()<<endl;
	cout<<"Resta: "<<operacion.resta()<<endl;
	cout<<"Multiplicación: "<<operacion.multiplicacion()<<endl;
	cout<<"División: "<<operacion.division()<<endl;
	return 0;
}



