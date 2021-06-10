/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 28/05/2021
			Fecha de modificaci�n: 31/05/2021

 ***********************************************************************/

#if !defined(__Class_Diagram_2_Datos_h)
#define __Class_Diagram_2_Datos_h

class Operaciones;

class Datos
{
public:
   float getValor1(void);
   void setValor1(float newValor1);
   float getValor2(void);
   void setValor2(float newValor2);
   float getValor3(void);
   void setValor3(float newValor3);
   float getValor4(void);
   void setValor4(float newValor4);
   Datos();
   ~Datos();

   Operaciones* operaciones;

protected:
private:
   float valor1;
   float valor2;
   float valor3;
   float valor4;


};

#endif
