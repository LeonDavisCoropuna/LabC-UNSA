#include<iostream>
#include "operacionFactorial.h"
using namespace std;


Factorial::~Factorial(){}
Factorial::Factorial(){}

int Factorial::devolverFactorial(){
    int aux=1;
    for(int i=1;i<=operador;i++){
        aux *= i;
    }
    return aux;
}
