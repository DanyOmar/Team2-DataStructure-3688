/***********************************************************************
 * Module:  Fecha.h
 * Author:  George
 * Modified: lunes, 31 de mayo de 2021 10:43:19
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Fecha_h)
#define __Class_Diagram_1_Fecha_h

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   Fecha();
   ~Fecha();

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif