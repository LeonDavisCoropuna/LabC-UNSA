#include "lista.h"
#include <iostream>

using namespace std;

Lista::Lista(){
    raiz = NULL;
}

void Lista::insertar_final(int num){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->num = num;
    nuevo_nodo->sig = NULL;
    //en el caso de lista vacia
    if(raiz == NULL){
        raiz = nuevo_nodo;
    }
    //obtenemos el ultimo nodo
    else{
        Nodo *aux = raiz;
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo_nodo;
    }
}

void Lista :: insertar_inicio(int num){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->num = num;
    nuevo_nodo->sig = raiz;
    raiz = nuevo_nodo;
}

void Lista::mostrar_lista(){
    
    Nodo *aux = raiz;
    while(aux != NULL){
        cout<<aux->num<<"  ";
        aux = aux->sig;
    }
    
}
//recibe 2 parametros, el primero la posicion
//el segundo es el numero a ingresar
void Lista::insertar_mitad(int pos, int num){
    if(raiz == NULL){
        cout<<"Lista vacía\n";
        return;
    }
    else{
        Nodo *actual = raiz;
        while(actual != NULL){
            if(actual->num == pos){
                Nodo *nuevo_nodo = new Nodo();
                nuevo_nodo->num = num;
                nuevo_nodo->sig = actual->sig;
                actual->sig = nuevo_nodo;
                return;
            }
            actual = actual->sig;
        }
        cout<<"Elemento no encontrado\n";
    }
}

void Lista::eliminar_final(){
    if(raiz == NULL){
        cout<<"Lista vacía\n";
        return;
    }
    Nodo *aux = raiz;
    Nodo *anterior = raiz;
    while(aux->sig != NULL){
        anterior = aux;
        aux = aux->sig;
    }
    anterior->sig = aux->sig;
    delete aux;
}

void Lista::eliminar_primero(){
    if(raiz == NULL){
        cout<<"Lista vacía\n";
        return;
    }
    Nodo *aux = raiz;
    raiz = raiz->sig;
    delete aux;
}

void Lista::eliminar_elemento(int num){
    if(raiz == NULL){
        cout<<"Lista vacía\n";
        return;
    }

    if(raiz->num == num){
        eliminar_primero();
        return;
    }

    Nodo *actual = raiz;
    Nodo *anterior = raiz;

    while(actual != NULL){
        if(actual->num == num){
            anterior->sig = actual->sig;
            delete actual;
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
    cout<<"Elemento no encontrado\n";
    
}

//obtener el ultimo elemento
Nodo* Lista::getTail(Nodo* cur){
    while (cur != NULL && cur->sig != NULL)
        cur = cur->sig;
    return cur;
}
//genera el pivot
Nodo* Lista::partition2(Nodo* head, Nodo* end, Nodo** newHead, Nodo** newEnd){
    Nodo* pivot = end;
    Nodo *prev = NULL, *cur = head, *tail = pivot;
 
    while (cur != pivot) {
        if (cur->num < pivot->num) {
            if ((*newHead) == NULL)
                (*newHead) = cur;
 
            prev = cur;
            cur = cur->sig;
        }
        else{
            
            if (prev)
                prev->sig = cur->sig;
            Nodo* tmp = cur->sig;
            cur->sig = NULL;
            tail->sig = cur;
            tail = cur;
            cur = tmp;
        }
    }
 
   
    if ((*newHead) == NULL)
        (*newHead) = pivot;
 
    (*newEnd) = tail;
 
    return pivot;
}
//genera el pivot

Nodo* Lista::partition1(Nodo* head, Nodo* end, Nodo** newHead, Nodo** newEnd){
    Nodo* pivot = end;
    Nodo *prev = NULL, *cur = head, *tail = pivot;
 
    while (cur != pivot) {
        if (cur->num > pivot->num) {
            if ((*newHead) == NULL)
                (*newHead) = cur;
 
            prev = cur;
            cur = cur->sig;
        }
        else{
            
            if (prev)
                prev->sig = cur->sig;
            Nodo* tmp = cur->sig;
            cur->sig = NULL;
            tail->sig = cur;
            tail = cur;
            cur = tmp;
        }
    }
 
   
    if ((*newHead) == NULL)
        (*newHead) = pivot;
 
    (*newEnd) = tail;
 
    return pivot;
}
//funcion recursiva
Nodo* Lista::quickSortRecur(Nodo* head, Nodo* end,int n){
    if (!head || head == end)
        return head;
 
    Nodo *newHead = NULL, *newEnd = NULL;
    
    Nodo* pivot;
    if(n == 0) pivot = partition2(head, end, &newHead, &newEnd);
    else pivot = partition1(head, end, &newHead, &newEnd);
 
  
    if (newHead != pivot) {
        Nodo* tmp = newHead;
        while (tmp->sig != pivot)
            tmp = tmp->sig;
        tmp->sig = NULL;
 
        newHead = quickSortRecur(newHead, tmp,n);
 
        
        tmp = getTail(newHead);
        tmp->sig = pivot;
    }
 
    pivot->sig = quickSortRecur(pivot->sig, newEnd,n);
 
    return newHead;
}
//orden ascdente
void Lista::quickSort_ascendente(){
    (raiz)= quickSortRecur(raiz, getTail(raiz),0);
    return;
}
//orden descendente
void Lista::quickSort_descendente(){
    (raiz)= quickSortRecur(raiz, getTail(raiz),1);
    return;
}
