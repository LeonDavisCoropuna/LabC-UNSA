#include<iostream>
#include<ctime>
 
using namespace std;
 
struct Lista{
    int dato;
    Lista *sig;
};
 
void insertar(Lista *&,int);
void eliminar(Lista *&,int);
void mostrar(Lista *);
 
int main(){
 
    Lista *lista = NULL;
    srand(time(NULL));
 
    for(int i=0;i<10000;i++){
        int aux = 1 + rand() % (10001 - 1);
        insertar(lista,aux);
    }
 
    mostrar(lista);
    eliminar(lista,5);
    cout<<endl<<endl;
    eliminar(lista,8);
    mostrar(lista);
   
    return 0;
}
 
void insertar(Lista *&lista,int n){
    Lista *nuevo_nodo = new Lista();
    nuevo_nodo->dato = n;
   
    Lista *aux1 = lista;
    Lista *aux2;
    while(aux1 != NULL && aux1->dato < n){
        aux2 = aux1;
        aux1 = aux1->sig;
    }
    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->sig = nuevo_nodo;
    }
    nuevo_nodo->sig = aux1;
}
 
void eliminar(Lista *&lista, int n){
    if(lista != NULL){
        Lista *aux;
        Lista *anterior = NULL;
        aux = lista;
 
        while(aux != NULL && aux->dato != n){
            anterior = aux;
            aux = aux->sig;
        }
        if(aux == NULL){
            cout<<"El elemento no existe";
        }
        else if(anterior == NULL){
            lista = lista->sig;
            delete aux;
        }
        else{
            anterior->sig = aux->sig;
            delete aux;
        }
    }
}
 
void mostrar(Lista *lista){
    Lista *aux = lista;
    while(aux != NULL){
        cout<<aux->dato<<"  ";
        aux = aux->sig;
    }
}
