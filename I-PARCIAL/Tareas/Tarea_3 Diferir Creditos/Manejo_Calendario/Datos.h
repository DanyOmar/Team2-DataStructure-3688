/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 01/06/2021

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
