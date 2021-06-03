/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 01/06/2021

 ***********************************************************************/
#if !defined(__Class_Diagram_4_Datos_h)
#define __Class_Diagram_4_Datos_h
#include<iostream>

using namespace std;

class Datos
{

private:
   string Nombre;
   float Cantidad;
   int Diferido;

public:
   Datos();
   string getNombre();
   void setNombre(string );
   float getCantidad();
   void setCantidad(float );
   int getDiferido();
   void setDiferido(int );

};


#endif
