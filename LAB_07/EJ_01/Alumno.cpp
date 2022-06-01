#pragma one
#include "Alumno.h"
using namespace std;

Alumno::Alumno(){}
Alumno::~Alumno(){}

void Alumno::setAlumno(){
    cout<<"Edad del alumno: ";cin>>edad;
    cin.ignore();
    cout<<"Nombre del alumno: ";getline(cin,nombre);
}
void Alumno::mostrar(){
    cout<<"Edad: "<<edad<<endl<<"Nombre: "<<nombre<<endl;
}
