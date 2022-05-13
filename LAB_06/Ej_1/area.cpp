#include <iostream>
#include "area.h"
#include <stdfix.h>

using namespace std;

Area::Area(int x,int y){
    altura = x;
    ancho = y;
}

Area::~Area(){}

void Area::perimetro(){
    cout<<"Perimetro: "<<2*(ancho+altura)<<endl;
}

void Area::area(){
    cout<<"Area: "<<ancho*altura<<endl;
}

