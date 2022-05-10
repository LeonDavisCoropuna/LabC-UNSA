#include<iostream>
#include<ctime>
 
using namespace std;
 
void mostrar(float *);
int sumar(float *,float *);
 
int main(){
 
    float *vector1,*vector2;
 
    vector1 = new float[3];
    vector2 = new float[3];
 
    srand(time(NULL));
 
    for(int i=0;i<1000000;i++){
        for(int i=0;i<3;i++){
            float producto=0;
            vector1[i] = 1 + rand() % (100-1);
            vector2[i] = 1 + rand() % (100-1);
        }
        mostrar(vector1);
        mostrar(vector2);
        cout<<"Producto: "<<sumar(vector1,vector2)<<endl;
    }
    delete []vector1;
    delete []vector2;
    return 0;
