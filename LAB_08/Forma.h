//CLASS FORMA.H
#pragma once

#include<bits/stdc++.h>

using namespace std;

class Forma{
	protected:
		int x, y;
	public:
		string forma;
		float Area;
		string color;
		Forma(string,int,int);
		~Forma();
		Forma();
		virtual void imprimir();
		void setColor(string);
		string getColor();
		void setCoordenada(int,int);

};


