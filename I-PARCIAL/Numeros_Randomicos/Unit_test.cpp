/*
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Tema: Arreglo estático
			Fecha de creación: 28/05/2021
			Fecha de modificación: 28/05/2021
*/
#include "pch.h"
#include "CppUnitTest.h"
#include "../Deber2/Vector.cpp"
#include "../Deber2/Operaciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float vec[10] = { 1,2,3,4,5,6,7,8,9,10 };
			Operaciones<float> operaciones;
			Vector<float> vector;
			operaciones.set_vect(tipoDato vec[10]);
			Assert::AreEqual({ 1,2,3,4,5,6,7,8,9,10 }, funcion.encerar(vec[10]);
			Assert::AreEqual({ 1,2,3,4,5,6,7,8,9,10 }, funcion.ingresar(vec[10]);
			Assert::AreEqual({ 1,2,3,4,5,6,7,8,9,10 }, funcion.procesar(vec[10]);
			Assert::AreEqual({ 1,2,3,4,5,6,7,8,9,10 }, funcion.imprimir(vec[10]);
		}
	};
}
