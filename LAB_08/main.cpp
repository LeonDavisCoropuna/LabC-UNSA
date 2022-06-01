#include "Forma.h"
#include "Rectangulo.h"
#include "Elipse.h"
#include "Cuadrado.h"
#include "Circulo.h"

#include<iostream>

using namespace std;

void cambiar(Forma *[]);
void MaxArea(Forma *[]);

int main() {

	Forma *vector[5];

	vector[0] = new Forma("Rojo",12,56);
	vector[1] = new Rectangulo("amarillo",12,10,16,12);
	vector[2] = new Elipse("Verde",20,15,23,19);
	vector[3] = new Cuadrado("Azul",5,3,21);
	vector[4] = new Circulo("Negro",9,0,20);

	cambiar(vector);
	MaxArea(vector);

	return 0;
}

void cambiar(Forma *vector[5]){
	string color;
	cout<<"Nuevo color: ";getline(cin,color);
	cout<<endl;
	for(int i=0;i<5;i++){
		vector[i]->color = color;
	}
	for(int i=0;i<5;i++){
		vector[i]->imprimir();
		cout<<endl;
	}
}

void MaxArea(Forma *vector[5]){
    string obj = vector[0]->forma;
    float aux = vector[0]->Area;
    for(int i=0;i<5;i++){
        if(aux < vector[i]->Area){
            aux = vector[i]->Area;
            obj = vector[i]->forma;
        }
    }
    cout<<endl<<"El Area Maxima es de un: "<<obj<<"\nArea: "<<aux<<endl;
}

