#include<iostream>
#include "Multimedia.h"
#include "Disco.h"

using namespace std;

int main(){

    Multimedia nuevo(16.235, "Soni");
    nuevo.imprimir();
    cout<<endl;
    Disco nuevo2(12.48,"Marvel",2.15,"Thanos");
    nuevo2.imprimir();

    return 0;
}
