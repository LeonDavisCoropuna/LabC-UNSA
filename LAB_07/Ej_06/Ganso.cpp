#include <iostream>
#include "Ganso.h"

using namespace std;

Ganso::Ganso(float b, string c) : Ave(b){
    volar = true;
    vivienda = c;
}

Ganso::~Ganso(){}

void Ganso::imprimir(){
    cout<<"Ganso\n";
    Ave::imprimir();
    cout<<"\nVive en: "<<vivienda;
}


