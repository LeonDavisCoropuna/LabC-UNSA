#pragma once
#include <iostream>

using namespace std;

class Multimedia{
    protected:
        double precio;
        string distribuidora;
    public:
        Multimedia(double,string);
        ~Multimedia();
        virtual void imprimir();
};
