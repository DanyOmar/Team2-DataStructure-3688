/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotuña Omar, Loachamín Johnny, Zumba Alvaro
			Fecha de creación: 28/05/2021
			Fecha de modificación: 03/06/2021

 ***********************************************************************/
#include <iostream>
#include "Operacion.h"
#include "Datos.h"
#include "Fecha.h"
#include <ctime>
#include <sstream>
#include <cstdlib>

////////////////////////////////////////////////////////////////////////////////////////////////////////
// Name:       Operacion::definir(Fecha fecha_copia, int _dia,int i,int anio, int d )
// Purpose:    Implementation of Operacion::definir(Fecha fecha_copia, int _dia,int i,int anio, int d )
// Return:     Fecha
////////////////////////////////////////////////////////////////////////////////////////////////////////

Fecha Operacion::definir(Fecha fecha_copia, int _dia,int i,int anio, int d ){
    if(_dia==31 && (i==1||i==3||i==5||i==7||i==8||i==10||i==12) )
    {
        if(d==0 && _dia==31){
            fecha_copia.setDia(1);
            fecha_copia.setMes(i+1);
        }else if(d==6 && _dia==31){
            //_dia=-1;
            fecha_copia.setDia(2);
            fecha_copia.setMes(i+1);
        }else if(_dia==31){
            fecha_copia.setDia(_dia);
            fecha_copia.setMes(i);
        }

    }
    else if(_dia==30 && (i==4||i==6||i==9||i==11) ) {
        //printf("\n2");
        if(d==0&& _dia==30){
            //_dia=0;
            fecha_copia.setDia(1);
            fecha_copia.setMes(i+1);
        }else if(d==6&&_dia==30){
            //_dia=-1;
            fecha_copia.setDia(2);
            fecha_copia.setMes(i+1);
        }else if(_dia==30){
            fecha_copia.setDia(_dia);
            fecha_copia.setMes(i);
        }

    }else if ((_dia >= 28) && i==2 ){
       // printf("\n4");
        if(anio%4==0){
             if(d==0 ){
                //_dia=0;
                fecha_copia.setDia(1);
                fecha_copia.setMes(i+1);
            }else if(d==6 ){
                //_dia=-1;
                fecha_copia.setDia(2);
                fecha_copia.setMes(i+1);
            }else{
                fecha_copia.setDia(1);
                fecha_copia.setMes(i+1);
            }
        }else{
            if(d==0 ){
                //_dia=0;
                fecha_copia.setDia(1);
                fecha_copia.setMes(i+1);
            }else if(d==6 ){
                //_dia=-1;

                fecha_copia.setDia(2);
                fecha_copia.setMes(i+1);
            }else {
                fecha_copia.setDia(1);
                fecha_copia.setMes(i+1);
            }
        }
    }else{
        //printf("\n6");
        if(d==0){
            //printf("\n6.1");
            //_dia=0;
            if((_dia==30)&&(i==1||i==3||i==5||i==7||i==8||i==10||i==12)){
                fecha_copia.setDia(_dia+1);
                fecha_copia.setMes(i);
            }else if(( _dia==29)&& (i==4||i==6||i==9||i==11)){
                fecha_copia.setDia(_dia+1);
                fecha_copia.setMes(i);
            }else if( (_dia==29) && i==2 && anio%4==0) {
                fecha_copia.setDia(_dia+1);
                fecha_copia.setMes(i);
            }else{
                fecha_copia.setDia(_dia+1);
                fecha_copia.setMes(i);
            }
        }else if(d==6){
            //printf("\n6.2");
            //_dia=-1;
            if((_dia==29)&&(i==1||i==3||i==5||i==7||i==8||i==10||i==12)){
                fecha_copia.setDia(1);
                fecha_copia.setMes(i);
            }else if(( _dia==28)&& (i==4||i==6||i==9||i==11)){
                fecha_copia.setDia(1);
                fecha_copia.setMes(i);
            }else if( (_dia==27) && i==2 && anio%4==0) {
                fecha_copia.setDia(1);
                fecha_copia.setMes(i);
            }else{
                //printf("\n6.2");
                if(d==0){
                    fecha_copia.setDia(_dia+1);
                    fecha_copia.setMes(i);
                }
                if(d==6){
                    fecha_copia.setDia(_dia+2);
                    fecha_copia.setMes(i);

                if(fecha_copia.getDia()==32){
                    fecha_copia.setDia(1);
                    if(fecha_copia.getMes()==12){
                        fecha_copia.setAnio(anio+1);
                        fecha_copia.setMes(1);
                    }
                    else
                        printf("\n6.2");
                        fecha_copia.setMes(i+1);
                }
                }else
                {
                    //printf("\n6.2");
                   fecha_copia.setDia(1);
                    fecha_copia.setMes(i);
                }

            }
        }else{
            fecha_copia.setDia(_dia);
            fecha_copia.setMes(i);
        }
    }
    if(fecha_copia.getMes()==13)
        fecha_copia.setMes(1);
    return fecha_copia;
}

///////////////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Calendario(Datos datos, Fecha fecha )
// Purpose:    Implementation of Operacion::Calendario(Datos datos, Fecha fecha )
// Return:     void
///////////////////////////////////////////////////////////////////////////////////

void Operacion::Calendario(Datos datos, Fecha fecha )
{

    time_t t = time(NULL);
	tm* timePtr = localtime(&t);

    stringstream ss_year;
    ss_year << timePtr->tm_year+1900;
    string Year = ss_year.str();
    int _anio = stoi(Year,nullptr,10);
    fecha.setAnio(stoi(Year,nullptr,10));


    stringstream ss_month;
    ss_month << timePtr->tm_mon+1;
    string Month = ss_month.str();
    if(atoi(Month.c_str()) < 10)
        Month = "0"+Month;
    int _mes = stoi(Month,nullptr,10);
    fecha.setMes(stoi(Month,nullptr,10));


    stringstream ss_day;
    ss_day << timePtr->tm_mday;
    string Day = ss_day.str();
    if(atoi(Day.c_str()) < 10)
        Day = "0"+Day;
    int _dia = stoi(Day,nullptr,10);
    fecha.setDia(stoi(Day,nullptr,10));


    int contador_anio = (fecha.getAnio()+1)+(datos.getDiferido()/12);
    int j=0;

    for(fecha.getAnio();fecha.getAnio()<contador_anio;fecha.setAnio(fecha.getAnio()+1)){
        for(int i=1;i<=12;i++,j++){
                if(j==datos.getDiferido()-1){
                    fecha.setAnio(contador_anio);//cuando se cumpla el plaso sale del for
                    i = 12;
                }else if(i==1&&j==0){
                    i=_mes;
                }else{

                }
                int a = (14 - i) / 12;
                int y = fecha.getAnio() - a;
                int m = i + 12 * a - 2;
                int d = (_dia + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;
                int _diause;
                switch(d){
                    case 0:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                    break;
                    case 1:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                    break;
                    case 2:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                        break;
                    case 3:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                        break;
                    case 4:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                        break;
                    case 5:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                        break;
                    case 6:
                        fecha = definir(fecha,_dia, i,fecha.getAnio(),d);
                        Imprimir(fecha,j);
                    break;
                }
            }
    }
    Imprimir(datos);
}

//////////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Imprimir(Fecha fecha,Datos datos)
// Purpose:    Implementation of Operacion::Imprimir(Fecha fecha,Datos datos)
// Return:      void
//////////////////////////////////////////////////////////////////////////////
void Operacion::Imprimir(Fecha fecha,int j){
    printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,fecha.getDia(),fecha.getMes(),fecha.getAnio());
}



//////////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Imprimir(Datos datos)
// Purpose:    Implementation of Operacion::Imprimir(Datos datos)
// Return:     void
//////////////////////////////////////////////////////////////////////////////
void Operacion::Imprimir(Datos datos){
    printf("\n\n=========================================================================");
    printf("\nSe dividio para %d cuotas.",datos.getDiferido());
    printf("\nCantidad total: %.2f ",datos.getCantidad());
    printf("\nNombre:");
    cout << datos.getNombre();

    printf("\n=========================================================================");

}
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Implementation of Operacion::Operacion()
// Return:
////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Implementation of Operacion::~Operacion()
// Return:
////////////////////////////////////////////////////////////////////////

Operacion::~Operacion()
{
   // TODO : implement
}
