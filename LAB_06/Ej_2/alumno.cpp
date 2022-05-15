#include <iostream>
#include "alumno.h"
#include <stdfix.h>

using namespace std;

Alumno::Alumno(int CUI,string nombre,float n1,float n2, float n3){
    this->cui = CUI;
    this->nombre = nombre;
    this->nota1 = n1;
    this->nota2 = n2;
    this->nota3 = n3;
}

Alumno::~Alumno(){}


string Alumno::firstName(){
    string name;
    bool band = true;
    int aux;
    for(int i=0;i<nombre.length();i++){
        if(nombre.substr(i,1) != " "){
            for(int j=0;j<nombre.length();j++){
                if(nombre.substr(j,1) == " "){
                    return name;
                }
                else{
                    name = name.append(nombre.substr(j,1));
                }
            }
        }
        else{
            for(int j=0;j<nombre.length();j++){
                if(nombre.substr(j,1) != " "){
                    aux = j;
                    i = nombre.length();
                    break;
                }
            }
        }
    }

    for(int i=aux;i<nombre.length();i++){
        if(nombre.substr(i,1) == " "){
            return name;
        }
        else{
            name = name.append(nombre.substr(i,1));
        }
    }

    return name;
}


float Alumno::promedio(){
    return (nota1+nota2+nota3)/3;
}

string Alumno::estado(){
    if(promedio() >= 10.5){
        return "El alumno APROBO";
    }
    else{
        return "El alumno NO APROBO";
    }
}

void Alumno::imprimir(){
    cout<<"CUI: "<<cui<<endl;
    cout<<"Primer nombre: "<<firstName()<<endl;
    cout<<"Promedio de notas: "<<promedio()<<endl;
    cout<<"El alumno: "<<estado()<<endl;
}

