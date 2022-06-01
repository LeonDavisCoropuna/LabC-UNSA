#pragma once
#include "iostream"
#include "Pato.h"

using namespace std;


Pato::Pato(float a,int b) : Ave(a){
    volar = true;
    edad = b;
}
Pato::~Pato(){}

void Pato::imprimir(){
    cout<<"Pato:\n";
    Ave::imprimir();
    cout<<"\nEdad : "<<edad;
}

