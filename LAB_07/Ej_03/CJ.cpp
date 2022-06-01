#include "iostream"
#include "CJ.h"

CuentaJoven::~CuentaJoven(){};
void CuentaJoven::imprimir(){
    Productobancario::imprimir();
}
CuentaJoven::CuentaJoven(string x,double y,int z) : Cuenta(x,y,z){}
