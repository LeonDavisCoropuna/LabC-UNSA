#include<iostream>
using namespace std;
int main(){
string matriz[3][4];
for(int i=0;i<3;i++){
cout<<"Persona "<<i+1<<endl;
cout<<"Nombre: ";getline(cin,matriz[i][0]);
fflush(stdin);
cout<<"Apellido: ";getline(cin,matriz[i][1]);
fflush(stdin);
cout<<"Edad: ";getline(cin,matriz[i][2]);
fflush(stdin);
cout<<"DNI: ";getline(cin,matriz[i][3]);
fflush(stdin);
}
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
cout<<matriz[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}
