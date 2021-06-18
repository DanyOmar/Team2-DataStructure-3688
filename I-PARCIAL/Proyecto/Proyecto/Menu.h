#include "Lista.h"

class Menu{
	public:
		int menu(const char titulo[], const char *opciones[], int n);
		void menu_principal();
		void menu_insertar();
		void menu_mostrar();
		void menu_buscar();
		void menu_eliminar();
		void gotoxy(int, int);
};
