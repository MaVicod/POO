#pragma once
#include<iostream>
class Contador
{
private:
    int valor;
public:
    Contador();
    Contador(int _valor);
    ~Contador();
    // Metodo
    Contador& incrementar(int cantidad);
    void mostrar() const;
};




