/*********************************************************************
			UFA-ESPE
			SOFTWARE
			Autores: Chasiluisa Santiago, Chicango George,
				Gualotu�a Omar, Loacham�n Johnny, Zumba Alvaro
			Fecha de creaci�n: 03/06/2021
			Fecha de modificaci�n: 10/06/2021
*********************************************************************/

#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz
{
    public:
        Matriz();
        virtual ~Matriz();
        void Ingresar1();
        void Ingresar2();
        void imprimir();
        void multiplicar();
        int Getdim() { return dim; }
        void Setdim(int val) { dim = val; }


    private:
        int dim;
        int vector1 [3][3] ;
        int vector2 [3][3] ;
        int vectorR [3][3] ;
};

#endif // MATRIZ_H
