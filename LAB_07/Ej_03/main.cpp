#include <iostream>
#include "PB.h"
#include "Cuenta.h"
#include "Prestamo.h"
#include "CJ.h"
#include "Hipoteca.h"

using namespace std;



int main(){

    Productobancario nuevo2("Leon",10.56,8);
    nuevo2.imprimir();

    Cuenta nuevo3("Davis",48.56,12);
    nuevo3.imprimir();
    
    return 0;
}
