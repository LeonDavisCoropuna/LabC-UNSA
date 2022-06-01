//CLASE ELIPSE.H

#pragma once

#include "Forma.h"
#include<bits/stdc++.h>

using namespace std;

class Elipse : public Forma{
protected:
	int radioMayor, radioMenor;
public:
	Elipse(string,int,int,int,int);
    Elipse();
	~Elipse();
	void imprimir();
	double area();
};
