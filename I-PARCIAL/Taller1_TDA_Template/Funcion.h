
#include <iostream>
#include"Operaciones.cpp"
template <typename dato>

class Funcion{
   private:
   	Operaciones<dato> operaciones;
	public:
   		dato suma(Operaciones<dato>);
   		dato resta(Operaciones<dato>);
   		dato multiplicacion(Operaciones<dato>);
   		dato division(Operaciones<dato>);
};


