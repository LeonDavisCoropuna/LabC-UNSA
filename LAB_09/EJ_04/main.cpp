#include <iostream>
#include "ej4.h"

using namespace std;

int main(){
    int arr[] = {10,7,2,51,6};
    float arr2[] = {10.5,10.6,41.1,2.9,11.4};
    Array <int> nuevo(arr);
    Array <float> nuevo2(arr2);
    cout<<"\nNúmero mayor: "<<nuevo2.mayor();
    cout<<"\nNúmero menor: "<<nuevo2.menor();
    
    return 0;
}
