#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,aux;
    float media=0;
    cout<<"Cantidad de numeros: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Numero: ";cin>>aux;
        media += aux;
    }
    cout<<"Media: "<<media/n;
    return 0;
}
