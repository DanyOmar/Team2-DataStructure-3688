/***********************************************************************
 * Module:  Fecha.h
 * Author:  George
 * Modified: lunes, 31 de mayo de 2021 23:52:45
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Class_Diagram_4_Fecha_h)
#define __Class_Diagram_4_Fecha_h
#include <iostream>
class Datos;

class Fecha
{
private:
   int dia;
   int mes;
   int anio;

public:
   int getDia(void);
   void setDia(int );
   int getMes(void);
   void setMes(int );
   int getAnio(void);
   void setAnio(int );
   Fecha();
   ~Fecha();

   //Datos* datos;

};

#endif
