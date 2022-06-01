#pragma once

#include "Elipse.h"
#include<bits/stdc++.h>

using namespace std;

class Circulo : public Elipse{
    protected:
    	int radio;
    public:
    	Circulo(string,int,int,int);
    	~Circulo();
    	Circulo();
    	void imprimir();
    	double area();
};
