#include <iostream>
#include "Ave.h"
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"

using namespace std;

int main(){
    Ganso ganso(15.23,"Corral");
    ganso.imprimir();
    
    cout<<endl<<endl;
    
    Pato pato(3.56,1);
    pato.imprimir();
    
    cout<<endl<<endl;
    
    Gallina gallina(5.36,"tiene cresta");
    gallina.imprimir();
    

    return 0;
}
