//CLASS FORMA.CPP
#include "Forma.h"

Forma::Forma(string a,int b,int c) {
	color = a;
	x=b; 
	y=c;
	forma = "Punto";
	Area = 0;
}

Forma::~Forma(){}
Forma::Forma(){}
void Forma::imprimir(){
	cout<<"La figura es un: "<<forma<<endl;
	cout<<"Color: "<<color<<endl<<"Centro: ("<<x<<","<<y<<")\n";
}
void Forma::setColor(string _color){
	color = _color;
}
string Forma::getColor(){
	return color;
}
void Forma::setCoordenada(int _x,int _y){
	
	x = _x;
	y = _y;
}
