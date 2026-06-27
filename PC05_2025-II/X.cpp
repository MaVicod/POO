#include "X.h"
#include<iostream>

X& X::operator()(){
    return *this;
}

X& X::operator()(int a){
    data = a;
    return *this;
}

int& X::operator[](int b){
    return dato;
}


void X::mostrar() const{
    std::cout << this->dato;
}











