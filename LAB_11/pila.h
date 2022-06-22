#pragma once
#include "ctime"
#include "iostream"
using namespace std;

class Nodo{
public:
	Nodo *sig;
	int num;
};

class Pila{
private:
	Nodo *raiz;
	string nombre;
public:
	Pila();
	Pila(string); 
	void vaciar_pila();
	void insertar_elemento(int);
	void pop(); //elimina el primer elemento
	void eliminar_elemento(int);
	void buscar_elemento(int);
	void mostrar_pila();
	void hanoi(int,Pila *&,Pila *&,Pila *&); 
	int top(); //retorna el valor del primer elemento
};
