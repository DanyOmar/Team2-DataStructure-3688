/***********************************************************************
 * Module:  Persona.h
 * Author:  George
 * Modified: lunes, 31 de mayo de 2021 10:45:13
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

class Fecha;

class Persona
{
public:
   int getEdad(void);
   void setEdad(int newEdad);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getDireccion(void);
   void setDireccion(std::string newDireccion);
   long getId(void);
   void setId(long newId);
   Persona();
   ~Persona();

   Fecha* fecha;

protected:
private:
   int edad;
   std::string nombre;
   std::string apellido;
   std::string direccion;
   long id;


};

#endif