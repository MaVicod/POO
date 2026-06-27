#include "Contador.h"

Contador::Contador() : valor(0){}

Contador::Contador(int _valor) : valor(_valor){}

Contador::~Contador()
{
    std::cout<< "El objeto esta siendo destruido..." << std::endl;
}


Contador& Contador:: incrementar(int cantidad){
    valor += cantidad;
    return *this;
}

void Contador::mostrar() const{
    std::cout << valor << std::endl;
}

