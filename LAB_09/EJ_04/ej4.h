#include <iostream>

using namespace std;

template <typename T>

class Array{
    private:
        T array[5];
    public:
        Array(T []);
        ~Array(){}
        T mayor(){
            T aux = array[0];
            for(int i=0;i<5;i++){
                (aux < array[i]) ? aux = array[i] : 0;
            }
            return aux;
        }
        T menor(){
            T aux = array[0];
            for(int i=0;i<5;i++){
                (aux > array[i]) ? aux = array[i] : 0;
            }
            return aux;
        }
};

template <typename T>
Array <T> :: Array(T arr[]){
    for(int i=0;i<5;i++){
        array[i] = arr[i];
    }
}


