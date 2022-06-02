#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>

class Array{
    private:
        T inicio;
        T final;
        vector <T> arr;
    public:
        Array(vector <T> , T, T);
        ~Array(){}
        void ascendente(){
            sort(arr.begin(), arr.end());
        }
        void descendente(){
            sort(arr.begin(), arr.end(), greater<T>());
        }
        void mostrar(){
            for(auto i = arr.begin(); i != arr.end(); ++i){
                if(*i >= inicio && *i <= final){
                    cout<< *i << "  ";
                }
            }
        }
};

template <typename T>

Array <T> ::Array(vector <T> _arr, T _inicio, T _final){
    arr = _arr;
    inicio = _inicio;
    final = _final;
}


