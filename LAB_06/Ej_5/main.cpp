#include<iostream>
using namespace std;
#include "matriz.h"

int main(){

    Matriz nuevo;
    nuevo.ingresarDatos();
    nuevo.mostrar();
    nuevo.buscar(5);
}
