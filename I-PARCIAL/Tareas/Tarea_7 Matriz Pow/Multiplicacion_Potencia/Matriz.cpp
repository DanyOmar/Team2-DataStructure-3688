/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu?a Omar, Loacham?n Johnny, Zumba Alvaro
			Fecha de creaci?n: 03/06/2021
			Fecha de modificaci?n: 10/06/2021
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
   // printf("\nIngrese segunda Matriz\n");
   for(int i=0;i<3;i++)
   {
   		for(int j=0;j<3;j++)
   		{

   		    //scanf("%d",&vector2[i][j]);
   		    vector2[i][j]=vector1[i][j];

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

void Matriz::Ingresar3(){
   // printf("\nIngrese segunda Matriz\n");
   for(int i=0;i<3;i++)
   {
   		for(int j=0;j<3;j++)
   		{
   		    //printf("Matriz 1 [%d][%d]:",i,j);
   		    //scanf("%d",&vector2[i][j]);
   		    vectorR[i][j]=vector1[i][j];
   		     printf("\nMatriz R [%d]:",vectorR[i][j]);
		}
   }

}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::multiplicar()
// Purpose:    Implementation of Matriz::multiplicar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Matriz::multiplicar(int num){

    for(int n=1;n<num;n++){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int suma = 0;
            for (int k=0;k<3;k++)
            {
              suma+=vector1[i][k]*(vector2[k][j]);
            }
            vectorR[i][j]=suma;
            vector1[i][j]= vectorR[i][j];
            suma = 0;
       }
    }
    //Ingresar3();
    }
}



