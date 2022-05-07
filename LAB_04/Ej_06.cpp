#include<iostream>

using namespace std;
void mostrar(int [][3]);
int main(){
int matriz[3][3],mayor,count;
for(int i=0;i<3;i++){
int aux = 0;
for(int j=0;j<3;j++){
cout<<"Matriz ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
aux += matriz[i][j];
}
if(i==0){
mayor = aux;
count = i;
}
if(mayor < aux){
mayor = aux;
count = i;
}
}
mostrar(matriz);
cout<<"\nSumatoria mayor: "<<mayor<<" \nN° de fila: "<<count;
return 0;
}
void mostrar(int matriz[3][3]){
cout<<endl<<"Matriz: \n";
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
cout<<matriz[i][j]<<" ";
}
cout<<endl;
}
}
