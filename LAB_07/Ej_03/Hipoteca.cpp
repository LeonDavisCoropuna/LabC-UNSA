#include "Hipoteca.h"
#include "iostream"

Hipoteca::~Hipoteca(){};
void Hipoteca::imprimir(){
    Productobancario::imprimir();
}

Hipoteca::Hipoteca(string x,double y, int z) : Prestamo(x,y,z){}
