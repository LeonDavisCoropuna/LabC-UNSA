/*8. Escribir un programa que genere la tabla de multiplicar de un número
introducido por el teclado.*/

include<iostream>
using namespace std;
int main(){
int n;
cout<<"Ingrese un numero: ";cin>>n;
for(int i=1;i<11;i++){
cout<<n<<"x"<<i<<"="<<n*i<<endl;
}
return 0;
}
