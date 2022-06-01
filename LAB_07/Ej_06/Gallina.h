#include "iostream"
#include "Ave.h"

using namespace std;

class Gallina : public Ave{
    protected:
        string info;
    public:
        void imprimir();
        Gallina(float,string);
        ~Gallina();
};
