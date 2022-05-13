#ifndef ALUMNO_H
#include<iostream>

using namespace std; 
 
class Alumno{
    private:
        int cui;
        string nombre;
        float nota1,nota2,nota3;
    public:
        Alumno(int,string,float,float,float);
        ~Alumno();
        void imprimir();
        float promedio();
        string estado();
};

#endif
