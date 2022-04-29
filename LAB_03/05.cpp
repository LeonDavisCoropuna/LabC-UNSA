/*5. Desarrollar un programa, utilizando funciones con un tipo de retorno, con las
siguientes opciones:
a. Introducir un valor x entero comprendido entre 0 y 100.
b. Validar que sea un valor par.
c. Sumar todos los números impares desde el 0 hasta el valor de x */

//EJERCICIO 5

#include<iostream>
using namespace std;

bool rango(int);
void par(int);
int sumatoria(int);

int main(){

    int x;
    while(true){
        cout<<"Ingrese un valor entre 0 y 100: ";cin>>x;
        if(rango(x)){
            break;
        }

    }

    par(x);
    cout<<"Sumatoria: "<<sumatoria(x);

    return 0;
}

bool rango(int num){
    if(num > 0 && num < 100){
        return true;
    }
    else{
        return false;
    }
}

void par(int num){
    if(num%2==0){
        cout<<"Es un número par\n";
    }
    else{
        cout<<"No es un número par\n";
    }
}
int sumatoria(int num){
    int suma=0;
    for(int i=1;i<=num;i++){
        if(i%2 != 0){
            suma += i;
        }
    }
    return suma;
}
*/
