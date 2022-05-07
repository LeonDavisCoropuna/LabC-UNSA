#include<iostream>
using namespace std;
int main(){
int matriz[100],count=0;
for(int i=2;i<=100;i++){

int aux=0;
for(int j=1;j<=i;j++){
if(i%j == 0){
aux++;
}
}
if(aux <= 2){
matriz[count] = i;
count++;
}
}
for(int i=0;i<count;i++){
cout<<matriz[i]<<" ";
}
return 0;
}

5. Implemente
