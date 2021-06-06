#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>
#include "Matriz.h"

using namespace std;

int main()
{

    int **cuadrado;
    int num;
    string dim;


    do{
        printf("Digite el tamaño del arreglo, solo numeros impares:");
    	scanf("%d",&num);
    }while(num%2==0||num<0);
    num=2*num-1;

    cuadrado=(int**)calloc(num,sizeof(int*));
    for(int i=0;i<num;i++){
        *(cuadrado+i)=(int*)calloc(num,sizeof(int));
    }

    Matriz matrizUse=Matriz(cuadrado);
    matrizUse.llenar(num,num);
    matrizUse.mostrar(num,num);

    system("pause");
    return 0;
}
