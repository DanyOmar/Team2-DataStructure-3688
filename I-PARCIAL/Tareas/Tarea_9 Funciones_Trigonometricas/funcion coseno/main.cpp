#include <iostream>
#include "Operaciones.h"

int main() {
	Operaciones op;
    int x = 45;
    std::cout << "El coseno de "<< x <<" es: " << op.cos(x);
	return 0;
}
