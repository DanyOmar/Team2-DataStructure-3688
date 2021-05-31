#include "pch.h"
#include "CppUnitTest.h"
#include "../Deber1/Funcion.cpp"
#include "../Deber1/Operaciones.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float valor1=5.0F, valor2=6.5F;
			Operaciones<float> operaciones;
			Funcion<float> funcion;
			operaciones.setValor1(valor1);
			operaciones.setValor2(valor2);
			Assert::AreEqual(11.5F, funcion.suma(operaciones));
		}
	};
}
