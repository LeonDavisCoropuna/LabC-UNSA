#include "iostream"
#include "Prestamo.h"

void Prestamo::imprimir(){
    Productobancario::imprimir();
}

Prestamo::Prestamo(string x,double y,int z) : Productobancario(x,y,z){}
Prestamo::~Prestamo(){}
