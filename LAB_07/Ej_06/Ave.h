#pragma once
#include "iostream"
using namespace std;

class Ave{
    protected:
        bool volar;
        float peso;
    public:
        virtual void imprimir();
        Ave(float);
        ~Ave();
};  
