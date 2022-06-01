#include "Cuadrado.h"
#include<bits/stdc++.h>
using namespace std;

Cuadrado::Cuadrado(string a,int b,int c,int d) : Rectangulo(){
    color = a;
    x = b;
    y = c;
    lado = d;
    forma = "Cuadrado";
    Area = area();
}
Cuadrado::Cuadrado(){}
Cuadrado::~Cuadrado(){}

void Cuadrado::imprimir(){
    Forma::imprimir();
    cout<<"Lado: "<<lado<<endl;
}

int Cuadrado::area(){
    return (lado*lado);
}


