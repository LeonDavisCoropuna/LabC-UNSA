
#include "Rectangulo.h"
#include<bits/stdc++.h>
using namespace std;
Rectangulo::Rectangulo(string a,int b,int c,int x,int y) : Forma(a,b,c){
    if(x > y){
        ladoMayor = x;
        ladoMenor = y;
    }
    else{
        ladoMayor = y;
        ladoMenor = x;
    }
    Area = area();
	forma = "Rectangulo";
}
Rectangulo::Rectangulo(){};
Rectangulo::~Rectangulo(){}

void Rectangulo::imprimir(){
    
	cout<<"La figura es un: "<<forma<<endl;
	cout<<"Color: "<<color<<endl<<"Centro: ("<<x<<","<<y<<")\n";
	cout<<"Lado mayor: "<<ladoMayor<<endl<<"Lado menor: "<<ladoMenor<<endl;
}


int Rectangulo::area(){
	
	return ladoMenor*ladoMayor;
}

int Rectangulo::perimetro(){
	return 2*(ladoMenor+ladoMayor);
}

void Rectangulo::escala(double es){
    ladoMayor = ladoMayor*es;
    ladoMenor = ladoMenor*es;
}
