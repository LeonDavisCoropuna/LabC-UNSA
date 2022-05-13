#include <iostream>
#include "matriz.h"
#include <stdfix.h>
#include <ctime>

using namespace std;


Matriz::Matriz(){}
Matriz::~Matriz(){}

void Matriz::ingresarDatos(){
    srand(time(NULL));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz[i][j] = 1 + rand() % (10-1);
        }
    }
}
void Matriz::mostrar(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void Matriz::buscar(int x){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matriz[i][j] == x){
                cout<<"Dato encontradon Indice: ["<<i<<"]["<<j<<"]"<<endl;

                return;
            }
        }
    }
    cout<<"Dato NO encontrado";
}

