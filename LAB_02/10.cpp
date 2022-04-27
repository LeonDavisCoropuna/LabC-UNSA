/*10. Escribir un programa que pida al usuario una palabra y luego muestre por
pantalla una a una las letras de la palabra introducida empezando por la última*/

#include<iostream>
using namespace std;
int main(){
string palabra;
cout<<"Introduce una palabra: ";getline(cin,palabra);
for(int i=palabra.length();i>=0;i--){
cout<<palabra.substr(i,1);
}
}
