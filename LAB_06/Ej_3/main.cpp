#include<iostream>
#include "edad.h"
using namespace std;

int main(){

    Edad nuevo("Leon Davis","29/04/2022","11/02/2004");
    nuevo.conversor();
    nuevo.edad_actual();

    nuevo.imprimir();

    return 0;
}
