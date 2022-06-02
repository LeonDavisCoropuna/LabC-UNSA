#include <iostream>
#include "ej3.h"

using namespace std;

int main(){
    for(int i=0;i<5;i++){
        char aux1; string aux2;
        cout<<"Letra: ";cin>>aux1;
        fflush(stdin);
        cout<<"Apellido: ";getline(cin,aux2);
        fflush(stdin);
        Correo <char,string> nuevo(aux1,aux2);
        cout<<"\nCorreo: "<<nuevo.generarCorreo()<<endl<<endl;
    }
    
    return 0;
}
