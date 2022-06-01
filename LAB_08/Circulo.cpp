//CLASE CIRCULO.CPP

#include "Circulo.h"
#include<bits/stdc++.h>
using namespace std;

Circulo::Circulo(string a,int b,int c,int d) : Elipse(){
    color = a;
    x = b;
    y = c;
    radio = d;
    forma = "Circulo";
    Area = area();

}
Circulo::Circulo(){}
Circulo::~Circulo(){}

void Circulo::imprimir(){
    Forma::imprimir();
    cout<<"Radio: "<<radio<<endl;
}

double Circulo::area(){
    return 3.14*(radio*radio);
}


