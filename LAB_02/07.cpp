#include<iostream>
using namespace std;
int main(){
float nota1,nota2,nota3;
int n;
cout<<"Numero de estudiantes: ";cin>>n;
for(int i=0;i<n;i++){
float aux=0;
cout<<"Estudiante N° "<<i+1<<endl;
cout<<"Nota 1: ";cin>>nota1;
cout<<"Nota 2: ";cin>>nota2;
cout<<"Nota 3: ";cin>>nota3;
aux = (nota1+nota2+nota3)/3;
cout<<"Promedio: "<<aux<<endl;
}
return 0;
}
