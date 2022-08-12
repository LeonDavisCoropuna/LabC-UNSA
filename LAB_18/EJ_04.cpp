#include <iostream>
#include <math.h>
using namespace std;

template<int N>
struct Hexa
{
    enum {   
        ascii = (N % 16 <= 9) ? (48 + N % 16) : (55 + N % 16),
        value = ascii + Hexa<N / 16>::value * 100
    };
};
template<>
struct Hexa<0>
{
    enum{value = 0};
};

char* Hexadecimal(int num){

    char *cadena = new char[100];

    if(num == 0){
        *cadena = '0';
        return cadena;
    };
    
    int cont = 0, cont2 = 0, copia = num;

    while(num > 0){
        num /= 10;
        cont++;
    }
    cont = cont / 2;
    for(int i = pow(100,cont)/10; i > 0; i = i/100){

        int aux = (copia/i)*10 + copia/(i/10)%10;
        copia -= aux * (i/10);
        cadena[cont2] = char(aux);
        cont2++;
    }
    return cadena;
}
int main(){
    
    cout<<"  El numero 13245 en Hexadecimal es "<<Hexadecimal(Hexa<13245>::value)<<endl;
    return 0;
}
