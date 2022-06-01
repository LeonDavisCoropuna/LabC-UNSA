#pragma once
#include <iostream>
#include "Multimedia.h"

using namespace std;

class Disco : public Multimedia{
    private:
        double duracion;
        string tema;
    public:
        Disco(double,string,double,string);
        ~Disco();
        void imprimir();
};
