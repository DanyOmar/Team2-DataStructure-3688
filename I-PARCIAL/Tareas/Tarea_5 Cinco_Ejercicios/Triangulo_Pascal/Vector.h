/***********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 01/06/2021
			Fecha de modificaci�n: 05/06/2021

 ***********************************************************************/


#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    private:
        int *vectorUse;
        int dim;
        int posicion;
    public:
        Vector();
        virtual ~Vector();
        void setVector(int *,int);
        int* getVector();
        void setDim(int );
        int getDim();
        void setPosicion(int );
        int getPosicion();


};

#endif // VECTOR_H
