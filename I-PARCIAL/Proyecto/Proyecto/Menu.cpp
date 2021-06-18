#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>;
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13
#include "Menu.h"
#include "Lista.h"


using namespace std;

Lista lista;

void Menu::menu_principal(){
	bool repite = true;
    int opcion;

    const char *titulo = "MENU PRINCIPAL";
    const char *opciones[] = {"Insertar Datos","Mostrar Datos","Buscar Datos","Eliminar Datos" ,"Salir"};
    int n = 5;
    do {
        opcion = menu(titulo, opciones, n);
    switch (opcion) {
        case 1:
            menu_insertar();
            break;
        case 2:
            menu_mostrar();
            break;
        case 3:
            menu_buscar();
            break;
        case 4:
            menu_eliminar();
        	break;

        case 5:
            repite = false;
            break;
      	}
   	} while (repite);
}

void Menu::menu_insertar(){
	bool repiteUse = true;
   	int opcion,val;

   	const char *titulo = "Insertar Dato";
   	const char *opciones[] = {"Ingrese numero", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		printf("Numero:");
        		scanf("%d",&val);
        		lista.insertar(val);
                system("pause>nul");
            	break;
         	case 2:
            	repiteUse = false;
            	break;
      	}
   	}while(repiteUse);
}

void Menu::menu_mostrar(){
	bool repite = true;
   	int opcion;
    Lista lista;
   	const char *titulo = "MENU PARA MOSTRAR";
   	const char *opciones[] = {"Mostrar lista", "Mostrar un elemento", "Regresar"};
   	int n = 3;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        	    printf("\t~~Lista~~\n");
        		lista.mostrar();
                system("pause>nul");
            	break;
         	case 2:
         		int val;
         		cout<<"se muestra un elemento ";

            	system("pause>nul");
            	break;
         	case 3:
            	repite = false;
            	break;
      	}
   	}while(repite);
}
void Menu::menu_buscar(){
	bool repite = true;
   	int opcion;

   	const char *titulo = "MENU PARA BUSCAR";
   	const char *opciones[] = {"Buscar elemento", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		int val;
        		cout<<"Ingresa un elemento a buscar: ";


            	system("pause>nul");
            	break;
         	case 2:
            	repite = false;
            	break;
      	}
   	}while(repite);
}
void Menu::menu_eliminar(){
	bool repite = true;
   	int opcion;

   	const char *titulo = "MENU PARA ELIMINAR";
   	const char *opciones[] = {"Eliminar elemento", "Regresar"};
   	int n = 2;
   	do {
    	opcion = menu(titulo, opciones, n);
      	system("cls");
      	switch (opcion) {
        	case 1:
        		int val;
        		cout<<"Ingresa un elemnto a eliminar ";

            	system("pause>nul");
            	break;
         	case 2:
            	repite = false;
            	break;
      	}
   	}while(repite);
}


int Menu::menu(const char titulo[], const char *opciones[], int n){
  	int opcionSeleccionada = 1;
  	int tecla;
   	bool repite = true;
   	do {
      	system("cls");
      	gotoxy(5, 3 + opcionSeleccionada);
      	cout << ":-";
      	gotoxy(15, 2); cout << titulo;
      	for (int i = 0; i < n; i++) {
         	gotoxy(10, 4 + i); cout << i + 1 << ".- " << opciones[i];
      	}
      	do {
         	tecla = getch();
      	}while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);
      	switch (tecla) {
        	case ARRIBA:
           		opcionSeleccionada--;
           		if (opcionSeleccionada < 1) {
           			opcionSeleccionada = n;
           		}
           		break;
         	case ABAJO:
            	opcionSeleccionada++;
            	if (opcionSeleccionada > n) {
               		opcionSeleccionada = 1;
            	}
            	break;
         	case ENTER:
            	repite = false;
            	break;
      	}
   	} while (repite);
   	return opcionSeleccionada;
}


void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
