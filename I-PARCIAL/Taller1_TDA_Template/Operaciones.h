/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 19/05/2021
			Fecha de modificaci�n: 20/05/2021
*********************************************************************/
#include <iostream>

template <typename tipoDato>

class Operaciones{
    private: 
        tipoDato valor1;
        tipoDato valor2;
    public: 
        Operaciones();
        
    void setValor1(tipoDato);
    void setValor2(tipoDato);
    tipoDato getValor1();
    tipoDato getValor2();
};
