#pragma once

#include<iostream>
#include "PB.h"
using namespace std;

class Cuenta : public Productobancario{
    public:
        Cuenta(string,double,int);
        ~Cuenta();
        void imprimir();
};
