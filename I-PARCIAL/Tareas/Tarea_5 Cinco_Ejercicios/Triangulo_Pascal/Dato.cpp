#include <iostream>
#include <conio.h>
#include <string>
#include "Operacion.h"

Operacion::Operacion()
{
    //ctor
}

Operacion::~Operacion()
{
    //dtor
}

Operacion::Pascal(int n){
    for (int line = 1; line <= n; line++)
	{
		// used to represent C(line, i)
		int C = 1;

		for (int i = 1; i < (n - line + 1); i++){
			printf(" ");
		}

		for (int i = 1; i <= line; i++)
		{

			// The first value in a line is always 1
			printf("%d ",C);
			C = C * (line - i) / i;
		}

		printf("\n");
	}
}
