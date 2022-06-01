//CLASE RECTANGULO.H
#pragma once

#include "Forma.h"
#include<bits/stdc++.h>

using namespace std;

class Rectangulo : public Forma{
protected:
	float ladoMayor, ladoMenor;
public:
	Rectangulo(string,int,int,int,int);
	~Rectangulo();
	Rectangulo();
	void imprimir();
	int area();
	int perimetro();
	void escala(double);
};
