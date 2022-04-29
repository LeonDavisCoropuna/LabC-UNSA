 
//EJERCICIO 3
/*
3. Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento
de una persona y por medio de una función calcule su edad en años, meses y
días
*/

#include<iostream>

using namespace std;

void conversor(string,int[]);
void edad_actual(int [],int [],int []);
int dias(int,int);

int main(){

    string actual,cumple;
    int cumpleanios[3],actualidad[3],edad[3];

    cout<<"Fecha actual: ";getline(cin,actual);
    cout<<"Fecha de cumpleaños: ";getline(cin,cumple);
    conversor(actual,actualidad);
    conversor(cumple,cumpleanios);

    edad_actual(actualidad,cumpleanios,edad);

    cout<<"Dias: "<<edad[0]<<"\nMeses: "<<edad[1]<<"\nAños: "<<edad[2];

    return 0;
}

void conversor(string fecha,int lista[]){
    lista[0] = stoi(fecha.substr(0,2));
    lista[1] = stoi(fecha.substr(3,2));
    lista[2] = stoi(fecha.substr(6,fecha.length()-5));
}
void edad_actual(int actual[],int cumpleanios[],int edad[]){
    int aux;
    if(actual[0] < cumpleanios[0]){
        edad[0] = dias(actual[1],actual[2]) - cumpleanios[0] + actual[0];
        edad[1] = cumpleanios[1] + 1;
        if(edad[1]>12){
            edad[2] = 1;
            edad[1] = edad[1] - 12;
        }
    }
    else{
        edad[0] = actual[0] - cumpleanios[0];
    }
    if(actual[1] < cumpleanios[1]){
        edad[1] = 12 - cumpleanios[1] + actual[1];
        edad[2] = edad[2] + 1;
    }
    else{
        edad[1] = actual[1] - cumpleanios[1];
    }
    edad[2] = edad[2] + cumpleanios[2];
    edad[2] = actual[2] - edad[2];
}

int dias(int num,int anio){
    if(num == 1 || num == 3 || num == 5 || num == 7|| num == 8 || num == 10 || num == 12){
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
