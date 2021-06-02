/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

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
