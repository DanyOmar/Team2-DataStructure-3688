/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

 ***********************************************************************/

#include "Operaciones.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Suma(float _dato1, float _dato2)
// Purpose:    Implementation of Operaciones::Suma()
// Parameters:
// - _dato1
// - _dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Suma(float _dato1, float _dato2)
{
   return _dato1+_dato2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Suma(float _dato1, float _dato2, float _dato3)
// Purpose:    Implementation of Operaciones::Suma()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Suma(float _dato1, float _dato2, float _dato3)
{
   return _dato1+_dato2+_dato3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Suma(float _dato1, float _dato2, float _dato3, float _dato4)
// Purpose:    Implementation of Operaciones::Suma()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// - _dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Suma(float _dato1, float _dato2, float _dato3, float _dato4)
{
   return _dato1+_dato2+_dato3+_dato4;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Resta(float _dato1, float _dato2)
// Purpose:    Implementation of Operaciones::Resta()
// Parameters:
// - _dato1
// - _dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Resta(float _dato1, float _dato2)
{
   return _dato1-_dato2;
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Resta(float _dato1, float _dato2, float _dato3)
// Purpose:    Implementation of Operaciones::Resta()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Resta(float _dato1, float _dato2, float _dato3)
{
   return _dato1-_dato2-_dato3;
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Resta(float _dato1, float _dato2, float _dato3, float _dato4)
// Purpose:    Implementation of Operaciones::Resta()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// - _dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Resta(float _dato1, float _dato2, float _dato3, float _dato4)
{
   return _dato1-_dato2-_dato3-_dato4;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Multiplicacion(float _dato1, float _dato2)
// Purpose:    Implementation of Operaciones::Multiplicacion()
// Parameters:
// - _dato1
// - _dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Multiplicacion(float _dato1, float _dato2)
{
   return _dato1*_dato2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Multiplicacion(float _dato1, float _dato2, float _dato3)
// Purpose:    Implementation of Operaciones::Multiplicacion()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Multiplicacion(float _dato1, float _dato2, float _dato3)
{
   return _dato1*_dato2*_dato3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Multiplicacion(float _dato1, float _dato2, float _dato3, float _dato4)
// Purpose:    Implementation of Operaciones::Multiplicacion()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// - _dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Multiplicacion(float _dato1, float _dato2, float _dato3, float _dato4)
{
   return _dato1*_dato2*_dato3*_dato4;
}

//============================
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Mayor(float _dato1, float _dato2)
// Purpose:    Implementation of Operaciones::Mayor()
// Parameters:
// - _dato1
// - _dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Mayor(float _dato1, float _dato2)
{
    if(_dato1>_dato2){
        return _dato1;
    }else{
        return _dato2;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Mayor(float _dato1, float _dato2, float _dato3)
// Purpose:    Implementation of Operaciones::Mayor()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Mayor(float _dato1, float _dato2, float _dato3)
{
   if(_dato1>_dato3 && _dato1>_dato2){
        return _dato1;
    }
    if(_dato3>_dato2 && _dato3>_dato1){
        return _dato3;
    }
    if(_dato2>_dato3 && _dato2>_dato1){
        return _dato2;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Mayor(float _dato1, float _dato2, float _dato3, float _dato4)
// Purpose:    Implementation of Operaciones::Mayor()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// - _dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Mayor(float _dato1, float _dato2, float _dato3, float _dato4)
{
    if(_dato1>_dato2 && _dato1>_dato2 && _dato1>_dato2){
        return _dato1;
    }
    if(_dato2>_dato3 && _dato2>_dato4){
        return _dato2;
    }
    else if(_dato3>_dato4){
        return _dato3;
    }
    else{
        return _dato4;
    }

}




//============================
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Menor(float _dato1, float _dato2)
// Purpose:    Implementation of Operaciones::Menor()
// Parameters:
// - _dato1
// - _dato2
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Menor(float _dato1, float _dato2)
{
    if(_dato1<_dato2){
        return _dato1;
    }else{
        return _dato2;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Menor(float _dato1, float _dato2, float _dato3)
// Purpose:    Implementation of Operaciones::Menor()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Menor(float _dato1, float _dato2, float _dato3)
{
   if(_dato1<_dato3 && _dato1<_dato2){
        return _dato1;
    }
    if(_dato3<_dato2 && _dato3<_dato1){
        return _dato3;
    }
    if(_dato2<_dato3 && _dato2<_dato1){
        return _dato2;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Menor(float _dato1, float _dato2, float _dato3, float _dato4)
// Purpose:    Implementation of Operaciones::Menor()
// Parameters:
// - _dato1
// - _dato2
// - _dato3
// - _dato4
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operaciones::Menor(float _dato1, float _dato2, float _dato3, float _dato4)
{
    if(_dato1<_dato2 && _dato1<_dato2 && _dato1<_dato2){
        return _dato1;
    }
    if(_dato2<_dato3 && _dato2<_dato4){
        return _dato2;
    }
    else if(_dato3<_dato4){
        return _dato3;
    }
    else{
        return _dato4;
    }

}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Operaciones()
// Purpose:    Implementation of Operaciones::Operaciones()
// Return:
////////////////////////////////////////////////////////////////////////

Operaciones::Operaciones()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::~Operaciones()
// Purpose:    Implementation of Operaciones::~Operaciones()
// Return:
////////////////////////////////////////////////////////////////////////

Operaciones::~Operaciones()
{
   // TODO : implement
}
