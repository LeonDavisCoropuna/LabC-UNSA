#include<iostream>
#include "PB.h"

using namespace std;

Productobancario::Productobancario(string x,double y,int z){
    cliente = x;
    saldo = y;
    numProductos = z;
};
Productobancario::~Productobancario(){};
        
void Productobancario::imprimir(){
    cout<<"Cliente: "<<cliente<<endl<<"Saldo: "<<saldo<<endl<<"Numero de productos: "<<numProductos<<endl;
}
void Productobancario::setProductoBancario(){
    cout<<"Cliente: ";getline(cin,cliente);
    cout<<"Saldo: ";cin>>saldo;
    cout<<"Numero de productos: ";cin>>numProductos;
}

