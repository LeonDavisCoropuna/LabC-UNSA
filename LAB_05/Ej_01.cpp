#include<iostream>
using namespace std;
 
void intercambiar(int *,int *);
 
int main(){
 
    int a;
    int b;
    cout<<"Ingrese el valor de A: ";cin>>a;
    cout<<"Ingrese el valor de B: ";cin>>b;
 
    intercambiar(&a,&b);
 
    cout<<"A: "<<a<<"\nB: "<<b;
 
    return 0;
}
 
void intercambiar(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
