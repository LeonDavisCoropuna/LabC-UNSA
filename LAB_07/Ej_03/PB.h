#pragma once

#include<iostream>

using namespace std;

class Productobancario{
    protected:
        string cliente;
        double saldo;
        int numProductos;
    public:
        Productobancario(string,double,int);
        ~Productobancario();
        virtual void imprimir();
        void setProductoBancario();
};
