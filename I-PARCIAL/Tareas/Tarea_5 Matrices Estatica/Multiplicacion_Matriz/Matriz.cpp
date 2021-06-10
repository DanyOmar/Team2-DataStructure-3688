/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 03/06/2021
			Fecha de modificación: 10/06/2021
*********************************************************************/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Matriz.h"

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz()
// Purpose:    Implementation of Constructor Matriz::Matriz()
// Return:
////////////////////////////////////////////////////////////////////////
Matriz::Matriz()
{
    //ctor
}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::~Matriz()
// Purpose:    Implementation of Destructor Matriz::~Matriz()
// Return:
////////////////////////////////////////////////////////////////////////

Matriz::~Matriz()
{
    delete vector1;
    delete vector2;
    delete vectorR;
}


////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Ingresar1()
// Purpose:    Implementation of Matriz::Ingresar1()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::Ingresar1(){
    printf("\nIngrese primera Matriz\n");
   for(int i=0;i<3;i++)
   {
   		for(int j=0;j<3;j++)
   		{
   		    printf("Matriz 1 [%d][%d]:",i,j);
   		    scanf("%d",&vector1[i][j]);
		}
   }

}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Ingresar2()
// Purpose:    Implementation of Matriz::Ingresar2()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::Ingresar2(){
    printf("\nIngrese segunda Matriz\n");
   for(int i=0;i<3;i++)
   {
   		for(int j=0;j<3;j++)
   		{
   		    printf("Matriz 1 [%d][%d]:",i,j);
   		    scanf("%d",&vector2[i][j]);
		}
   }

}
////////////////////////////////////////////////////////////////////////
// Name:       Matriz::imprimir()
// Purpose:    Implementation of Matriz::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////
void Matriz::imprimir(){
    printf("\nMatriz Resultante:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d]:",vectorR[i][j]);
            printf("%*s", j + 5, "");
        }
        printf("\n");
     }
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::multiplicar()
// Purpose:    Implementation of Matriz::multiplicar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::multiplicar(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           vectorR[i][j]=vector1[i][j]*vector2[i][j];
        }
        printf("\n");
     }
}



