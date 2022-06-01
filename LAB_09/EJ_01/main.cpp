#include <iostream>
#include "ej1.h"

using namespace std;

int main(){
    
    MayorMenor <int> nuevo(6,2,10);
    cout<<"Número mayor: "<<nuevo.mayor()<<endl;
    cout<<"Número menor: "<<nuevo.menor()<<endl;
    return 0;
}
