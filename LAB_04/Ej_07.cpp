#include<iostream>
#include<ctime>
using namespace std;
void cambiar_col(int [][5]);
void cambiar_fil(int [][5]);
void mostrar(int [][5]);
int main(){
srand(time(NULL));
int matriz[5][5];
int opc;
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
matriz[i][j] = 10 + rand() % (100-10);
}
}
cout<<"Matriz:\n";
mostrar(matriz);
cout<<endl;
while(true){

cout<<"1. Cambiar filas\n2. Cambiar columnas\n3.
Terminar\nOpcion: ";cin>>opc;
if(opc == 1){
cambiar_fil(matriz);
mostrar(matriz);
}
else if(opc == 2){
cambiar_col(matriz);
mostrar(matriz);
}
else if(opc == 3){
cout<<"Programa terminado";
break;
}
else{
cout<<"Opcion inválida\n";
}
}
return 0;
}
void cambiar_col(int matriz[5][5]){
int x,y,aux1[5];
cout<<"Columna a cambiar: ";cin>>x;
cout<<"Segunda columna: ";cin>>y;
for(int i=0;i<5;i++){
aux1[i] = matriz[i][x-1];
matriz[i][x-1] = matriz[i][y-1];
matriz[i][y-1] = aux1[i];
}
}
void cambiar_fil(int matriz[5][5]){
int x,y,aux1[5];
cout<<"Fila a cambiar: ";cin>>x;
cout<<"Segunda fila: ";cin>>y;
for(int i=0;i<5;i++){
aux1[i] = matriz[x-1][i];
matriz[x-1][i] = matriz[y-1][i];
matriz[y-1][i] = aux1[i];
}
}
void mostrar(int matriz[5][5]){
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){

cout<<matriz[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
}
