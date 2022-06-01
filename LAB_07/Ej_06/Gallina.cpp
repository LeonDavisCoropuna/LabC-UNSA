#include "iostream"
#include "Gallina.h"

using namespace std;

Gallina::Gallina(float a,string b) : Ave(a){
    volar = false;
    info = b;
}

Gallina::~Gallina(){}

void Gallina::imprimir(){
    cout<<"Gallina:\n";
    Ave::imprimir();
    cout<<endl<<info;
}

