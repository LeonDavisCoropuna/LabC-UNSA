#pragma once
#include <iostream>
#include "operacionBase.h"

using namespace std;

class Factorial : public Base{
    public:
        Factorial();
        ~Factorial();
        int devolverFactorial();
};
