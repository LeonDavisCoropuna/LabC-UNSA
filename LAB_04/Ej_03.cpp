#include<iostream>
using namespace std;
void mostrar(int [][3]);
int main(){
int matriz[5][3],suma=0;
for(int i=0;i<5;i++){
for(int j=0;j<3;j++){
cout<<"Matriz ["<<i<<"]["<<j<<"]: ";cin>>matriz[i][j];
if(i % 2 != 0){
suma += matriz[i][j];
}
}
}
mostrar(matriz);

cout<<endl<<"Sumatoria de filas pares: "<<suma;
return 0;
}
void mostrar(int matriz[5][3]){
for(int i=0;i<5;i++){
for(int j=0;j<3;j++){
cout<<matriz[i][j]<<" ";
}
cout<<endl;
}
}
