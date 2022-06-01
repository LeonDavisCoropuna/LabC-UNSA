#include <iostream>

using namespace std;

template <typename T>

class MayorMenor{
    private:
        T arr[3];
    public:
        MayorMenor(T,T,T);
        ~MayorMenor(){}
        
        T mayor(){
            T m = arr[0];

            for(int i=0;i<3;i++){
                (m < arr[i]) ? m = arr[i]:0;
            }
            return m;
        }
        
        T menor(){
            T n = arr[0];

            for(int i=0;i<3;i++){
                (n > arr[i]) ? n = arr[i]:0;
            }
            return n;
        }
        
};

template <typename T>
MayorMenor <T> :: MayorMenor(T _x, T _y, T _z){
    arr[0] = _x;
    arr[1] = _y;
    arr[2] = _z;
}


