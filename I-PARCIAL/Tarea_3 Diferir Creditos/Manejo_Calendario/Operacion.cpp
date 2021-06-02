/***********************************************************************
 * Module:  Operacion.cpp
 * Author:  George
 * Modified: martes, 1 de junio de 2021 0:05:10
 * Purpose: Implementation of the class Operacion
 ***********************************************************************/
#include <iostream>
#include "Operacion.h"
#include "Datos.h"
#include "Fecha.h"
#include <ctime>
#include <sstream>
#include <cstdlib>
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Calendario()
// Purpose:    Implementation of Operacion::Calendario()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::Calendario(Datos datos, Fecha fecha )
{

    time_t t = time(NULL);
	tm* timePtr = localtime(&t);

    stringstream ss_year;
    ss_year << timePtr->tm_year+1900;
    string Year = ss_year.str();
    int _anio = stoi(Year,nullptr,10);

    stringstream ss_month;
    ss_month << timePtr->tm_mon+1;
    string Month = ss_month.str();
    if(atoi(Month.c_str()) < 10)
        Month = "0"+Month;
    int _mes = stoi(Month,nullptr,10);

    stringstream ss_day;
    ss_day << timePtr->tm_mday;
    string Day = ss_day.str();
    if(atoi(Day.c_str()) < 10)
        Day = "0"+Day;
    int _dia = stoi(Day,nullptr,10);

    int contador_anio = (_anio+1)+(datos.getDiferido()/12);
    int j=0,dias,conatdor_dias;

    for(_anio;_anio<contador_anio;_anio++){
        for(int i=0;i<12;i++,j++){
                if(j==datos.getDiferido()-1){
                    _anio = contador_anio;
                    i = 12;
                }else if(i==0&&j==0){
                    i=_mes+1;
                }else{
                }
                int a = (14 - i) / 12;
                int y = _anio - a;
                int m = i + 12 * a - 2;
                int d = (_dia + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;

                switch(d){
                    case 0:
                        fecha.setAnio(_anio);
                        fecha.setMes(i);
                        fecha.setDia(_dia+1);
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia+1,i,_anio);
                    break;
                    case 1:
                        fecha.setAnio(_anio);
                        fecha.setMes(i);
                        fecha.setDia(_dia);
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia,i,_anio);
                    break;
                    case 2:
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia,i,_anio);
                    break;
                    case 3:
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia,i,_anio);
                    break;
                    case 4:
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia,i,_anio);
                    break;
                    case 5:
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia,i,_anio);
                    break;
                    case 6:
                        fecha.setAnio(_anio);
                        fecha.setMes(i);
                        //fecha.setDia(_dia+2);
                        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",j+1,_dia+2,i,_anio);
                    break;
                }




                //printf("\n%d. Fecha de Pago [ %d / %d / %d ].",j+1,fecha.getDia(),fecha.getMes(),fecha.getAnio());
            }
    }







}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Imprimir()
// Purpose:    Implementation of Operacion::Imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::Imprimir(Datos datos)
{
    Fecha fecha[datos.getDiferido()];
   for(int i=0; i<datos.getDiferido();i++){
        printf("\n%d. Fecha de Pago [ %d/%d/%d ].",i+1,fecha[i].getDia(),fecha[i].getMes(),fecha[i].getAnio());
   }
   printf("\n");
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Asignacion()
// Purpose:    Implementation of Operacion::Asignacion()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::Asignacion(void)
{
   // TODO : implement
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
