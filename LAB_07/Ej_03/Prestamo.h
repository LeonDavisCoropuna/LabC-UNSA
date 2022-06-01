#pragma once

#include<iostream>
#include "PB.h"
using namespace std;


class Prestamo : public Productobancario{
    protected:
        Prestamo(string,double,int);
        ~Prestamo();
        void imprimir();
};
