/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 31/05/2021

 ***********************************************************************/

#if !defined(__Class_Diagram_2_Operaciones_h)
#define __Class_Diagram_2_Operaciones_h
#include "Datos.h"

class Operaciones
{
public:
   Operaciones();
   float operator + (Datos);
   float operator - (Datos);
   float operator * (Datos);

   float operator < (Datos);
   float operator > (Datos);
   bool operator == (Datos);

   float operator / (Datos);
   float operator += (Datos);
   float operator -= (Datos);

   float operator <= (Datos);
   float operator >= (Datos);
   bool operator != (Datos);

   ~Operaciones();



};

#endif
