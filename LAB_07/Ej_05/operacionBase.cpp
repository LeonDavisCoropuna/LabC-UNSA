#include<iostream>
#include "operacionBase.h"
using namespace std;

Base::Base(){}
Base::~Base(){}

void Base::setOperador(int x){
    operador = x;
}

int Base::getOperador(){
    return operador;
}
