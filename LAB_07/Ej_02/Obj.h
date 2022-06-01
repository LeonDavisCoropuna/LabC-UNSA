#pragma once
#include "Material.h"
#include <bits/stdc++.h>

using namespace std;

class Objeto : public Material{
    protected:
        string obj;
    public:
        Objeto();
        ~Objeto();
        void setObjeto();
        void mostrar();
};
