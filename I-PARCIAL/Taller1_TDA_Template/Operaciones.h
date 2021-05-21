
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
