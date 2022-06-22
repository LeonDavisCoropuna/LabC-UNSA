#include "pila.h"
#include "iostream"
#include "ctime"

using namespace std;

int main(){
	
	Pila *pila = new Pila();
	
	
	Pila *origen = new Pila("A");
	Pila *destino = new Pila("B");
	Pila *auxiliar = new Pila("C");
	
	while(true){
	int opc;
	cout<<"\n1. Insertar elemento\n2. Eliminar elemento\n3. Buscar elemento\n4. Ejecutar Hanoi\n5  Mostrar pila \n6. Terminar codigo\nOpcion: ";cin>>opc;
	if(opc == 1){
	int aux;
	cout<<"Elemento a ingresar: ";cin>>aux; pila->insertar_elemento(aux); 
	}
	else if(opc == 2){
	int aux;
	cout<<"Elemento a eliminar: ";cin>>aux; pila->eliminar_elemento(aux);
	}
	else if(opc == 3){
	int aux;
	cout<<"Buscar elemento: ";cin>>aux; pila->buscar_elemento(aux);
	}
	else if(opc == 4){
	int aux;
	cout<<"\nNumero de discos para hanoi: ";cin>>aux;
	for(int i=aux;i>=1;i--){
	origen->insertar_elemento(i);
	}
	pila->hanoi(aux,origen,destino,auxiliar);
	origen->vaciar_pila();
	destino->vaciar_pila();
	auxiliar->vaciar_pila();
	}
	else if(opc == 5){
	cout<<endl;
	pila->mostrar_pila();
	cout<<endl;
	}
	else if(opc == 6){
	cout<<"Programa terminado"; 
	break;
	}
	else{
	cout<<"Opcion no v�lida";
	}
	}
	
	
	return 0;
}
	
