#pragma once

#include "Rectangulo.h"
#include<bits/stdc++.h>

using namespace std;

class Cuadrado : public Rectangulo{
protected:
	int lado;
public:
	Cuadrado(string,int,int,int);
	~Cuadrado();
    Cuadrado();
	void imprimir();
	int area();
};
