#include<iostream>
using namespace std;
bool buscar(int [],int);
int main(){
int array[8];
for(int i=0;i<8;i++){
cout<<"Agregue un numero: ";cin>>array[i];
}
int aux;
cout<<"Numero a buscar: ";cin>>aux;
if(buscar(array,aux)){
cout<<"\nNumero encontrado";
}
else{
cout<<"\nNumero NO encontrado";
}
return 0;

}
bool buscar(int array[],int num){
for(int i=0;i<8;i++){
if(array[i] == num){
return true;
}
}
return false;
}
