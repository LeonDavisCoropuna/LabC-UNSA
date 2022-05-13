#ifndef AREA_H
#include<iostream>

class Area{
    private:
        int altura;
        int ancho;
    public:
        void area();
        void perimetro();
        Area(int,int);
        ~Area();
};

#endif
