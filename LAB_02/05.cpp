/*5. Elabore un programa que lea n números y determine cuál es el mayor, el
menor y la media de los números leídos.*/

#include<iostream>
using namespace std;
int main(){
int n,mayor,menor,aux;
float suma=0;
cout<<"Número de elementos: ";cin>>n;
for(int i=0;i<n;i++){
cout<<"Ingrese un número: ";cin>>aux;
if(i==0){
mayor = aux;
menor = aux;
}
if(aux > mayor){
mayor = aux;
}
if(aux < menor){
menor = aux;
}
suma += aux;
}
cout<<"Numero menor: "<<menor<<endl;
cout<<"Numero mayor: "<<mayor<<endl;
cout<<"Media: "<<suma/n;
return 0;
