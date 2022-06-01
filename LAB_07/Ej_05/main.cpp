#include<iostream>
#include "operacionBase.h"
#include "operacionFactorial.h"

using namespace std;

int main(){
    int x=5;
    Factorial nuevo;
    nuevo.setOperador(x);
    cout<<"Factorial de "<<x<<" es: "<<nuevo.devolverFactorial();

    return 0;
}
