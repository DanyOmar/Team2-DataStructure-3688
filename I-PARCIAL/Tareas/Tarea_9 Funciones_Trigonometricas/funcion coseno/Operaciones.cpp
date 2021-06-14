#include<iostream>
#include<stdlib.h>
#include "Operaciones.h" 
#include<math.h>

using namespace std;

int Operaciones::factorial(int n){
	if(n < 1)		
		return 1;
	else
		return n * factorial(n - 1);
}

double Operaciones::gradConvert(double angulo){
	return (angulo * 3.1416) / 180;	
}

double Operaciones::cos(double angulo){
	double cosen = 0;
	int accuracy = 3;
	for(int i = 0; i < accuracy; i++){
		cosen = cosen + pow(-1, i)*pow(gradConvert(angulo), 2*i)/ factorial(2*i);
	}
	return cosen;
}
