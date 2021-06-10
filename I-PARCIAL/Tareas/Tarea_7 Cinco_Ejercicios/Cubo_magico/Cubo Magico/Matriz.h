#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;

class Matriz{
private:
  int **cuadrado;
public:

    Matriz(int** );
    void llenar(int,int);
    void mostrar(int, int);
    int **getMatriz();
    void setMatriz(int **);

};
