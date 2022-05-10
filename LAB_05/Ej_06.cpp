#include<iostream>
 
using namespace std;
 
void sumar (int a, int b){
    cout<<a<<" + "<<b<<" = "<<a+b;
};
void restar (int a, int b){
    cout<<a<<" - "<<b<<" = "<<a-b;
};
void multiplicar (int a, int b){
    cout<<a<<" x "<<b<<" = "<<a*b;
};
void dividir (int a, int b){
    cout<<a<<" / "<<b<<" = "<<a/b;
};
 
int main(){
 
    void (*operacion[4]) (int, int) = { sumar, restar, multiplicar, dividir };
 
    int a,b;
    cout<<"Valor de 'a': ";cin>>a;
    cout<<"Valor de 'b': ";cin>>b;
 
    cout<<"Resultados: \n";
    for(int i=0;i<4;i++){
        operacion[i](a,b);
        cout<<endl;
    }
    return 0;
}
