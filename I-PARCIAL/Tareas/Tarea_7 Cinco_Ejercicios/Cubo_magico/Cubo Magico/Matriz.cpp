#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Matriz.h"
using namespace std;

//////////////////////////////////////////////////////////////////////////////
// Name:       Matriz::Matriz(int **_cuadrado)
// Purpose:    Implementation of Constructor Matriz::Matriz(int **_cuadrado)
// Return:
//////////////////////////////////////////////////////////////////////////////

Matriz::Matriz(int **_cuadrado){
    cuadrado=_cuadrado;
}

//////////////////////////////////////////////////////////////////////////////
// Name:       **Matriz::getMatriz()
// Purpose:    Implementation of **Matriz::getMatriz()
// Return:      **int
//////////////////////////////////////////////////////////////////////////////

int **Matriz::getMatriz(){
    return cuadrado;
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Matriz::setMatriz(int **_cuadrado)
// Purpose:    Implementation of Matriz::setMatriz(int **_cuadrado)
// Return:     void
//////////////////////////////////////////////////////////////////////////////

void Matriz::setMatriz(int **_cuadrado){
    cuadrado=_cuadrado;
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Matriz::llenar(int a,int b)
// Purpose:    Implementation of Matriz::llenar(int a,int b)
// Return:     void
//////////////////////////////////////////////////////////////////////////////

void Matriz::llenar(int a,int b){
    int x=0,k=0,p=1,j=0,t=0,s=0,d=0;
        x=(b-1)/2;
        t=((a+1)/2);
        s=(a-x-1)/2;
        d=x;

         for(int g=0; g<((a+1)/2);g++){
            j=g;
            k=g;
        for( int i=x;i>=j;i--){
            *(*(cuadrado+i)+k)=p;
             if( k<(d-s) ){
                *(*(cuadrado+i)+(k+t))=p;
			}
            if(k>(d+s)){
                *(*(cuadrado+i)+(k-t))=p;
            }
            if(i>(d+s)){
                *(*(cuadrado+(i-t))+k)=p;
            }
            if(i<(d-s)){
                *(*(cuadrado+(i+t))+k)=p;
            }

            k++;
            p++;
        }
        x++;
    }
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Matriz::mostrar(int a,int b)
// Purpose:    Implementation of Matriz::mostrar(int a,int b)
// Return:     void
//////////////////////////////////////////////////////////////////////////////
void Matriz::mostrar(int a,int b){
   system("cls");
    int x=0,t=0,s=0;
        t=((a+1)/2);
        x=(b-1)/2;
        s=(a-x-1)/2;

        for(int l=0;l<a;l++){
                cout<<"\n\t";
            for(int h=0;h<b;h++){
                if(h>=(x-s) && h<=(x+s) && l<=(x+s) && l>=(x-s)){
                    cout<<"\t"<<*(*(cuadrado+l)+h);
                }
        	}
		}
}

