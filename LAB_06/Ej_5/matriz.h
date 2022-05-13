#ifndef MATRIZ_H
#include<iostream>

using namespace std;

class Matriz{
    private:
        int matriz[3][3];
    public:
        Matriz();
        ~Matriz();
        void ingresarDatos();
        void mostrar();
        void buscar(int);
};

#endif
