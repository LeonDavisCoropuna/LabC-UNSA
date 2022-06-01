#include <iostream>

using namespace std;

template <typename T, typename S>

class Operaciones{
    private:
        T x;
        S y;
    public:
        Operaciones(T,S);
        ~Operaciones(){}
        S suma(){
            return x+y;
        }
        S resta(){
            return x-y;
        }
        S multiplicacion(){
            return x*y;
        }
        S division(){
            return x/y;
        }
};

template <typename T, typename S>
Operaciones <T,S> :: Operaciones(T _x, S _y){
    x = _x;
    y = _y;
}
