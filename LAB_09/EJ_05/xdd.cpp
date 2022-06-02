#include <iostream>
#include <vector>
#include <algorithm>
#include "ej5.h"

using namespace std;

int main(){
    vector <int> array;
    
    array.push_back(5);
    array.push_back(2);
    array.push_back(10);
    array.push_back(3);
    array.push_back(56);
    array.push_back(0);

    Array <int> zzz(array,0,56);
    zzz.ascendente();
    zzz.mostrar();
    
    return 0;
}
