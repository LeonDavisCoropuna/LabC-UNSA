#include<iostream>
#include "Multimedia.h"
using namespace std;


Multimedia::Multimedia(double x,string y){
    precio = x;
    distribuidora = y;
}
Multimedia::~Multimedia(){}
void Multimedia::imprimir(){
    cout<<"Precio: "<<precio<<endl<<"Distribuidora: "<<distribuidora;
}
