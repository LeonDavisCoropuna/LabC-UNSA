#include "Cuenta.h"
#include "iostream"

using namespace std;

Cuenta::Cuenta(string x,double y,int z) : Productobancario(x,y,z){}

void Cuenta::imprimir(){
    Productobancario::imprimir();
}

Cuenta::~Cuenta(){}
