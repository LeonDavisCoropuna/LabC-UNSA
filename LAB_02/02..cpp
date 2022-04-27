/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.*/
#include<iostream>
using namespace std;
int main(){
int count =0;
for(int i=2;i>0;i++){
int aux=0;
for(int j=1;j<=i;j++){
if(i%j==0){
aux++;
}
}
if(aux <= 2){
cout<<i<<" ";
count++;
}
if(count >= 50){
break;
}
}
return 0;
}
