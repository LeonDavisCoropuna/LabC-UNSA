
#include "Elipse.h"
#include<bits/stdc++.h>
using namespace std;

Elipse::Elipse(string a,int b,int c,int d,int e) : Forma(a,b,c){
    radioMayor = d;
    radioMenor = e;
    forma = "Elipse";
    Area = area();
}

Elipse::Elipse(){};
Elipse::~Elipse(){}

void Elipse::imprimir(){
    Forma::imprimir();
    cout<<"Radio mayor: "<<radioMayor<<endl<<"Radio menor: "<<radioMenor<<endl;
}

double Elipse::area(){
    return 3.14*(radioMayor*radioMenor);
}


