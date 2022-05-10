#include<iostream>
 
using namespace std;
 
void agregar(string *,string *);
 
int main(){
 
    string *uno;
    string *dos;
 
    uno = new string;
    dos = new string;
    cout<<"Texto 1: ";getline(cin,*uno);
    cout<<"Textp 2: ";getline(cin,*dos);
   
    agregar(uno,dos);
    cout<<*dos;
 
    return 0;
}
 
void agregar(string *uno,string *dos){
    *dos = *dos + *uno;
}
