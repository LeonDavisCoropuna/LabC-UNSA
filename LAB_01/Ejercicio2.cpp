#include<iostream>

using namespace std;

int main(){

    string nombres,paterno,materno,resultado;

    cout<<"nombres: ";getline(cin,nombres);
    cout<<"Apellido paterno: ";getline(cin,paterno);
    cout<<"Apellido materno: ";getline(cin,materno);

    resultado = nombres.substr(0,1);
    resultado = resultado.append(paterno);
    resultado = resultado.append(materno.substr(0,1));

    int tamanio = resultado.size();
    for(int i=0;i<tamanio;i++){
        resultado[i] = tolower(resultado[i]);
    }
    resultado = resultado.append("@unsa.edu.pe");

    cout<<resultado;

    return 0;
}
