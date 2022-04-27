/*6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci
es la sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se
calcula sumando los dos anteriores a él*/

#include<iostream>
using namespace std;
int main(){
int n=9,a=0,b=1;
cout<<"Se muestran los primeros 18 terminos de la serie: \n";
for(int i=0;i<n;i++){
a = a + b;
cout<<a<<" ";
b = b + a;
cout<<b<<" ";
}
return 0;
}
