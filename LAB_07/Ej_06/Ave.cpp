#include "iostream"
#include "Ave.h"

using namespace std;

Ave::Ave(float y){
    peso = y;
}

Ave::~Ave(){};

void Ave::imprimir(){
    cout<<"Vuela?: ";
    if(volar){
        cout<<"Si";
    }
    else{
        cout<<"No";
    }
    cout<<endl<<"Peso: "<<peso;
}
