/*
2. Hacer un programa que lea por teclado un año, calcule y muestre si es
bisiesto. Para realizar el cálculo utiliza una función llamada bisiesto. La
función bisiesto recibe el año leído por teclado, comprueba si es o no bisiesto.
*/
//EJERCICIO 2

#include<iostream>

using namespace std;

void bisiesto(int);
int main(){

    int x;
    cout<<"Ingrese un año: ";cin>>x;
    bisiesto(x);

    return 0;
}

void bisiesto(int x){
    if(x%400==0 || (x%4==0 && x%100!=0)){
        cout<<"Es un año bisiesto";
    }
    else{
        cout<<"No es bisiesto";
    }
}
