#include "Obj.h"
#include <bits/stdc++.h>
using namespace std;

Objeto::Objeto(){}
Objeto::~Objeto(){}

void Objeto::setObjeto(){
    cout<<"Rojo: ";cin>>r;
    cout<<"Verde: ";cin>>g;
    cout<<"Azul: ";cin>>b;
    cin.ignore();
    cout<<"Material: ";getline(cin,material);
    cout<<"Tipo de objeto: ";getline(cin,obj);
}

void Objeto::mostrar(){
    cout<<obj<<" de color ("<<r<<","<<g<<","<<b<<")"<<" y material de "<<material<<endl;
}
