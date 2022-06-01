#include <iostream>
#include "ej2.h"
int main(){
    
    Operaciones <int,float> nuevo(5,2.4);
    cout<<nuevo.suma()<<endl;
    cout<<nuevo.resta()<<endl;
    cout<<nuevo.multiplicacion()<<endl;
    cout<<nuevo.division()<<endl;

    return 0;
}
