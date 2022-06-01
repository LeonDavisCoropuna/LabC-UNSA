#pragma once

#include<iostream>
#include "Prestamo.h"
using namespace std;


class Hipoteca : public Prestamo{
    public:
        Hipoteca(string,double,int);
        ~Hipoteca();
        void imprimir();
};
