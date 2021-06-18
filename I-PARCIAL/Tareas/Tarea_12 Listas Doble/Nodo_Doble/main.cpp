#include <iostream>
#include "lista_doble_enlazada.h"
using namespace std;
int main(int argc, char** argv) {
	ListaDobleEnlazada lst;

	int valor,dim,op,num1;
	do{
        printf("\nIngrese Valor:");
        scanf("%d",&valor);
        lst.insertar(valor);
        system("cls");
        printf("\n1)si -> volver a ingresar\n2)no ->continuar:\n \t");
        scanf("%d",&op);
        system("cls");
	}while(op!=2);

	//lst.insertarCola(2);
	lst.recorrer([](int valor, int indice){
		std::cout<<"Indice:  "<<indice<<"  valor "<<valor<<std::endl;
	});
	int suma=0;
	lst.recorrer([&suma](int valor, int indice){
		suma+=valor;
	});



	return 0;
}
