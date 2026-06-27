#include<iostream>
#include "Contador.h"
#include "X.h"

int main(){
    Contador c; // Constructor por defecto
    c.incrementar(5).incrementar(10).mostrar();

    Contador c1(5);
    c1.incrementar(5).incrementar(10).mostrar();
    // Destructor

    X v1;
    v1()(7)()[4] = 100;
    v1.mostrar(); //Muestra dato

    

}