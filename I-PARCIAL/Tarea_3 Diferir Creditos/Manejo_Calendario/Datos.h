/***********************************************************************
 * Module:  Datos.h
 * Author:  George
 * Modified: martes, 1 de junio de 2021 0:03:37
 * Purpose: Declaration of the class Datos
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


   //~Datos();

protected:

};


#endif
