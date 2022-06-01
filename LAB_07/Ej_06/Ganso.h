#pragma once

#include "iostream"
#include "Ave.h"

using namespace std;

class Ganso : public Ave{
    protected:
        string vivienda;
    public:
        void imprimir();
        Ganso(float,string);
        ~Ganso();
};
