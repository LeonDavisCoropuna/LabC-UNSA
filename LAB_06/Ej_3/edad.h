#ifndef EDAD_H
#include<iostream>

using namespace std;

class Edad{
    private:
        string actual;
        string cumple;
        string nombre;
        int cumpleanios[3],actualidad[3],edad[3];   
    public:
        Edad(string,string,string);
        ~Edad();
        void conversor();
        void edad_actual();
        int dias(int,int);
        void imprimir();
};

#endif
