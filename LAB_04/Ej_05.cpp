#include<iostream>
using namespace std;
struct Lista{
string nombre;
float precio;
int stock;
};
void dar_alta(Lista [],string);
void buscar(Lista []);
void modificar(Lista []);
int main(){
Lista lista[10];
int aux;
string aux2;

for(int i=0;i<10;i++){
fflush(stdin);
cout<<"Producto "<<i+1<<endl;
cout<<"Nombre del producto: ";getline(cin,lista[i].nombre);
cout<<"Stock: ";cin>>lista[i].stock;
cout<<"Precio: ";cin>>lista[i].precio;
cout<<endl;
}
while(true){
cout<<"\n1. Dar de alta un producto\n2. Buscar un producto\n3.
Modificar un producto\n4. Terminar\nOpcion: ";cin>>aux;
fflush(stdin);
if(aux == 1){
cout<<"Nombre del producto: ";getline(cin,aux2);
dar_alta(lista,aux2);
}
else if(aux == 2){
buscar(lista);
}
else if(aux == 3){
modificar(lista);
}
else if(aux == 4){
cout<<"Programa terminado";
break;
}
else{
cout<<"Opcion NO válida\n";
}
}
return 0;
}
void dar_alta(Lista lista[10],string name){
int compra;
for(int i=0;i<10;i++){
if(name == lista[i].nombre){
cout<<"Cantidad de productos a comprar: ";cin>>compra;
if(lista[i].stock - compra < 0){
cout<<"Cantidad inválida - Insuficiente stock\n";
dar_alta(lista,name);
}
else{
lista[i].stock -= compra;
cout<<"Nuevo stock: "<<lista[i].stock<<endl;
return;
}

}
}
}
void buscar(Lista lista[10]){
string name;
cout<<"Nombre del producto: ";getline(cin,name);
for(int i=0;i<10;i++){
if(name == lista[i].nombre){
cout<<"Producto ENCONTRADO\n";
return;
}
}
cout<<"Producto NO encontrado\n";
}
void modificar(Lista lista[10]){
string name;
cout<<"Nombre del producto: ";getline(cin,name);
for(int i=0;i<10;i++){
if(name == lista[i].nombre){
cout<<"Ingrese el nuevo stock: ";cin>>lista[i].stock;
cout<<"Ingrese el nuevo precio: ";cin>>lista[i].precio;
}
}
cout<<endl;
}
