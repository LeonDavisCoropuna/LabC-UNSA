/*
4. Hacer un programa que desarrolle una función, que genere en pantalla el
listado de números primos ubicados entre 1 hasta un número x (x es
ingresado por teclado).
*/
//EJERCICIO 4

#include<iostream>

using namespace std;

int primo(int );

int main(){

    int x;
    cout<<"X: ";cin>>x;
    for(int i=2;i<=x;i++){
        if(primo(i) != 0){
            cout<<i<<"   ";
        }
    }
    return 0;
}

int primo(int num){
    int aux = 0;
    for(int j=1;j<=num;j++){
        if(num%j==0){
            aux++;
        }
    }
    if(aux <= 2){
        return num;
    }
    return 0;
}
