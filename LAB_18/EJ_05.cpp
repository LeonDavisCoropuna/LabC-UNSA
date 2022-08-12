#include <iostream>
using namespace std;

template<int N>
struct Binairo{
    enum{ value = N % 2 + Binairo<N / 2>::value*10};
};

template <>
struct Binairo<1>
{
    enum{ value = 1};
};

template <>
struct Binairo<0>
{
    enum{ value = 0};
};

int main(){
    cout<<"El numero 451 en binario es: "<<Binairo<451>::value;
    return 0;
}
