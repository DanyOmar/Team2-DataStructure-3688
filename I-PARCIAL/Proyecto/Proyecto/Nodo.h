#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo (int val, Nodo *sig=NULL){
			this->valor=val;
			this->siguiente=sig;
		}
		Nodo *getSig(void);
		void setSig(Nodo *siguiente);
		void setVal(int val);
		int getVal(void);

	friend class Lista;
};



#endif // NODO_H
