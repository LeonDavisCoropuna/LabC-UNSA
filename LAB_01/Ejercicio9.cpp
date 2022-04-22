#include<iostream>

using namespace std;

int main(){
    int num,negativos=0;
    for(int i=0;i<10;i++){
        cout<<"Escribe un numero: ";cin>>num;
        if(num < 0){
            negativos += num;
        }
    }
    cout<<negativos;
    return 0;
}
