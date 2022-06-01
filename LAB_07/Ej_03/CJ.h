#pragma once

#include<iostream>
#include "Cuenta.h"
using namespace std;


class CuentaJoven : public Cuenta{
    private:
        CuentaJoven(string,double,int);
        ~CuentaJoven();
        void imprimir();
};
