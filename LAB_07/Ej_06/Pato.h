#include "iostream"
#include "Ave.h"

using namespace std;

class Pato : public Ave{
    protected:
        int edad;
    public:
        void imprimir();
        Pato(float,int);
        ~Pato();
};
