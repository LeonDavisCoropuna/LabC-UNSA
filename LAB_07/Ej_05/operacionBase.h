#pragma once
#include <iostream>

using namespace std;

class Base{
    protected:
        int operador;
    public:
        void setOperador(int);
        int getOperador();
        Base();
        ~Base();
};
