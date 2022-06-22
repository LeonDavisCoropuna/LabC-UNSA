#include "cola.h"
#include <iostream>
#include "ctime"
using namespace std;

Cola::Cola(){
	raiz = NULL;
}

void Cola::insertar_elemento(int num){
	
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->num = num;
	nuevo_nodo->sig = NULL;
	if(raiz == NULL){
		raiz = nuevo_nodo;
	}
	else{
		Nodo *aux = raiz;
		while(aux->sig != NULL){
			aux = aux->sig;
		}
		aux->sig = nuevo_nodo;
	}
}

void Cola::eliminar_elemento(){
	if(raiz == NULL){
		cout<<"Lista vacía\n";
		return;
	}
	if(raiz->sig != NULL){
	    Nodo *aux = raiz;
    	raiz = raiz->sig;
    	delete aux;
	}
	else{
	    cout<<"No se puede eliminar el ultimo nodo\n";
	}
}

bool Cola::buscar_elemento(int num){
	Nodo *aux = raiz;
	while(aux != NULL){
		if(aux->num == num){
			return true;
		}
		aux = aux->sig;
	}
	return false;
}

void Cola::mostrar_cola(){
	Nodo *aux = raiz;
	while(aux != NULL){
		cout<<aux->num<<"  ";
		aux = aux->sig;
	}
}

void Cola::hombres_mujeres(int num){
	int h,m;
	cout<<"Cantidad de hombres?: ";cin>>h;
	cout<<"Cantidad de mujeres?: ";cin>>m;
	
	Cola *hombres = new Cola();
	Cola *mujeres = new Cola();
	
	for(int i=0;i<h;i++){
		int aux;
		cout<<"Edad hombres "<<i+1<<": ";cin>>aux;
		hombres->insertar_elemento(aux);
	}
	for(int i=0;i<m;i++){
		int aux;
		cout<<"Edad mujeres "<<i+1<<": ";cin>>aux;
		mujeres->insertar_elemento(aux);
	}
	int contH =0, contM=0;
	
	for(int i=0;i<num;i++){
		
		if(hombres->raiz->num > mujeres->raiz->num){
			contH++;
		}
		else{
			contM++;
		}
		Nodo *aux = hombres->raiz;
		hombres->insertar_elemento(aux->num);
		hombres->raiz = hombres->raiz->sig;
		delete aux;
		
		Nodo *aux2 = mujeres->raiz;
		mujeres->raiz = mujeres->raiz->sig;
		mujeres->insertar_elemento(aux2->num);
		delete aux2;
		
	}
	
	cout<<"Hombres: "<<contH<<endl;
	cout<<"Mujeres: "<<contM<<endl;
	
	if(contH > contM) cout<<"----->Ganan los hombres\n";
    else if(contH < contM) cout<<"----->Ganan las mujeres\n";
    else cout<<"----->Empate!!\n";
	
	vaciar_cola(hombres);
	vaciar_cola(mujeres);
}

void Cola::vaciar_cola(Cola *&a){
    Nodo *aux = a->raiz;
    while(a->raiz != NULL){
        Nodo *aux = a->raiz;
        a->raiz = a->raiz->sig;
        delete aux;
    }
}


