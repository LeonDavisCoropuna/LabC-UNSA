#include "pila.h"
#include <iostream>
#include "ctime"
using namespace std;

Pila::Pila(){
	raiz = NULL;
}
Pila::Pila(string name){
	nombre = name;
	raiz = NULL;
}

void Pila::insertar_elemento(int num){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->num = num;
	nuevo_nodo->sig = raiz;
	raiz = nuevo_nodo;
}

void Pila::pop(){
	Nodo *aux = raiz;
	raiz = raiz->sig;
	delete aux;
}

int Pila::top(){
	return raiz->num;
}

void Pila::eliminar_elemento(int num){
	if(raiz == NULL){cout<<"Pila vac�a\n"; return;}
	
	
	if(raiz->num == num){
		Nodo *aux = raiz;
		raiz = raiz->sig;
		delete aux;
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
	cout<<"\nElemento no encontrado\n";
}

void Pila::vaciar_pila(){
	Nodo *aux = raiz;
	while(raiz != NULL){
		aux = raiz;
		raiz = raiz->sig;
		delete aux;
	}
}

void Pila::buscar_elemento(int num){
	if(raiz == NULL){cout<<"Pila vac�a\n"; return;}
	
	Nodo *aux = raiz;
	while(aux != NULL){
		if(aux->num == num){
			cout<<"\nElemento encontrado\n";
			return;
		}
		aux = aux->sig;
	}
	cout<<"Elemento NO encontrado";
}

void Pila::mostrar_pila(){
	if(raiz == NULL){cout<<"Pila vac�a\n"; return;}
	Nodo *aux = raiz;
	cout<<"Elementos de la Pila: ";
	while(aux != NULL){
		cout<<aux->num<<"  ";
		aux = aux->sig;
	}
}

void Pila::hanoi(int num, Pila *&origen, Pila *&destino, Pila *&auxiliar){
		if (num == 1){
			cout<<"Mueva el bloque "<<num<<" desde "<<origen->nombre<<" hasta  "<<destino->nombre<<endl;
			int top = origen->top();
			destino->insertar_elemento(top);
			origen->pop();
			return;
		}
		else{
			hanoi(num-1, origen, auxiliar, destino); 
			int top = origen->top();
			destino->insertar_elemento(top);
			origen->pop();
			cout<<"Mueva el bloque "<<num<<" desde "<<origen->nombre<<" hasta  "<<destino->nombre<<endl;
			
			hanoi(num-1, auxiliar, destino, origen);
		}
		return;
}
