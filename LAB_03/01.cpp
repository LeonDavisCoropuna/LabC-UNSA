/*
1. Hacer un programa que sin usar la función pow(), pero por medio de una
función, calcule la potencia de un número (ambos números ingresados por
teclado).
*/

//EJERCICIO 1

#include<iostream>

using namespace std;

int exponencial(int,int);

int main(){

    int x,y;
    cout<<"Ingrese el primer valor: ";cin>>x;
    cout<<"Ingrese el segundo valor: ";cin>>y;
    cout<<"Resultado: "<<exponencial(x,y);
    return 0;
}

int exponencial(int x,int y){
    int aux=1;
    for(int i=0;i<y;i++){
        aux = aux*x;
    }
    return aux;
}
