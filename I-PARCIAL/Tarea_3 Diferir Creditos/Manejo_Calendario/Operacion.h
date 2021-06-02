/***********************************************************************
 * Module:  Operacion.h
 * Author:  George
 * Modified: martes, 1 de junio de 2021 0:05:10
 * Purpose: Declaration of the class Operacion
 ***********************************************************************/

#if !defined(__Class_Diagram_4_Operacion_h)
#define __Class_Diagram_4_Operacion_h
#include <iostream>
#include "Fecha.h"
#include "Datos.h"

class Operacion
{
public:
   void Calendario(Datos,Fecha);
   void Imprimir(Datos);
   void Asignacion(void);
   Operacion();
   ~Operacion();

protected:
private:


};

#endif
