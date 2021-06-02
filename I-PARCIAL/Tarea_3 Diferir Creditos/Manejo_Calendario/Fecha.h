/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 01/06/2021

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
