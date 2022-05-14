#include <iostream>
#include "edad.h"
#include <stdfix.h>

using namespace std;

Edad::Edad(string _nombre,string _actual, string _cumple){
    actual = _actual;
    cumple = _cumple;
    nombre = _nombre;
}

Edad::~Edad(){}

void Edad::conversor(){
    cumpleanios[0] = stoi(cumple.substr(0,2));
    cumpleanios[1] = stoi(cumple.substr(3,2));
    cumpleanios[2] = stoi(cumple.substr(6,cumple.length()-5));

    actualidad[0] = stoi(actual.substr(0,2));
    actualidad[1] = stoi(actual.substr(3,2));
    actualidad[2] = stoi(actual.substr(6,actual.length()-5));
}

void Edad::edad_actual(){
    int aux;
    if(actualidad[0] < cumpleanios[0]){
        edad[0] = dias(actualidad[1],actualidad[2]) - cumpleanios[0] + actualidad[0];
        edad[1] = cumpleanios[1] + 1;
        if(edad[1]>12){
            edad[2] = 1;
            edad[1] = edad[1] - 12;
        }
    }
    else{
        edad[0] = actualidad[0] - cumpleanios[0];
    }

    if(actualidad[1] < cumpleanios[1]){
        edad[1] = 12 - cumpleanios[1] + actual[1];
        edad[2] = edad[2] + 1;
    }
    else{
        edad[1] = actualidad[1] - cumpleanios[1];
    }

    edad[2] = edad[2] + cumpleanios[2];
    edad[2] = actualidad[2] - edad[2];
}

int Edad::dias(int num,int anio){
    if(num == 1 || num == 3 || num == 5 || num == 7|| num == 8 ||
        num == 10 || num == 12){
        return 31;
    }
    else if(num == 2){

        if(anio%400 == 0 || (anio%4==0 && anio%100 != 0)){
            return 29;
        }
        else{
            return 28;
        }
    }
    return 30;
}

void Edad::imprimir(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dias: "<<edad[0]<<"\nMeses: "<<edad[1]<<"\nAños: "<<edad[2];
}
