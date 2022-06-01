#include<iostream>
#include "Disco.h"
using namespace std;


Disco::~Disco(){}
void Disco::imprimir(){
    Multimedia::imprimir();
    cout<<"\nDuracion: "<<duracion<<endl<<"Tema: "<<tema<<endl;
}

Disco::Disco(double x,string y, double a, string b) : Multimedia(x,y){
    duracion = a;
    tema = b;
}
