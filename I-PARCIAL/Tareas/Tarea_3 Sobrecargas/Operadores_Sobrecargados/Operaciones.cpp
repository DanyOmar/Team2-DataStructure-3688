/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 31/05/2021

 ***********************************************************************/

#include "Operaciones.h"
#include "Datos.h"

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::Operaciones()
// Purpose:    Implementation of Operaciones::Operaciones()
// Return:
////////////////////////////////////////////////////////////////////////

Operaciones::Operaciones()
{
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator + (Datos datos)
// Purpose:    Implementation of Operaciones::operator + (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////

float  Operaciones::operator + (Datos datos){
    return datos.getValor1()+datos.getValor2();

}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator - (Datos datos)
// Purpose:    Implementation of Operaciones::operator - (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////
float  Operaciones::operator - (Datos datos){
    return datos.getValor1()-datos.getValor2();

}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator * (Datos datos)
// Purpose:    Implementation of Operaciones::operator * (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////
float  Operaciones::operator * (Datos datos){
    return datos.getValor1()*datos.getValor2();

}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator < (Datos datos)
// Purpose:    Implementation of Operaciones::operator < (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////

float  Operaciones::operator < (Datos datos){
    if(datos.getValor1()<datos.getValor2()){
        return datos.getValor1();
    }else{
        return datos.getValor2();
    }


}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator > (Datos datos)
// Purpose:    Implementation of Operaciones::operator > (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////
float  Operaciones::operator > (Datos datos){
    if(datos.getValor1()>datos.getValor2()){
        return datos.getValor1();
    }else{
        return datos.getValor2();
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator == (Datos datos)
// Purpose:    Implementation of Operaciones::operator == (Datos datos)
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool  Operaciones::operator == (Datos datos){
    if(datos.getValor1()==datos.getValor2()){
        return true;
    }else{
        return false;
    }

}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator / (Datos datos)
// Purpose:    Implementation of Operaciones::operator / (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////
float  Operaciones::operator / (Datos datos){
    return datos.getValor1()/datos.getValor2();

}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator += (Datos datos)
// Purpose:    Implementation of Operaciones::operator += (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////

float  Operaciones::operator += (Datos datos){
    float num = datos.getValor1();
    num+=1;
    return num;
}
////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator -= (Datos datos)
// Purpose:    Implementation of Operaciones::operator -= (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////

float  Operaciones::operator -= (Datos datos){
    float num = datos.getValor1();
    num-=1;
    return num;
}


////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator <= (Datos datos)
// Purpose:    Implementation of Operaciones::operator <= (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////

float  Operaciones::operator <= (Datos datos){
    if(datos.getValor1()<=datos.getValor2()){
        return datos.getValor1();
    }else{
        return datos.getValor2();
    }


}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator >= (Datos datos)
// Purpose:    Implementation of Operaciones::operator >= (Datos datos)
// Return:     float
////////////////////////////////////////////////////////////////////////
float  Operaciones::operator >= (Datos datos){
    if(datos.getValor1()>=datos.getValor2()){
        return datos.getValor1();
    }else{
        return datos.getValor2();
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       Operaciones::operator =! (Datos datos)
// Purpose:    Implementation of Operaciones::operator == (Datos datos)
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool  Operaciones::operator != (Datos datos){
    if(datos.getValor1()!=datos.getValor2()){
        return true;
    }else{
        return false;
    }

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
