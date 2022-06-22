#include "cola.h"
#include "iostream"
#include "ctime"

using namespace std;

void menu(){
    cout<<"\n---------Menu---------\n";
    cout<<"1. Insertar elemento\n2. Eliminar elemento\n3. Realizar una busqueda\n4. Mostrar cola\n5. Comparar edades\n6. Finalizar";
}

int main(){
    Cola *cola = new Cola();
	while(true){
	    int opc;
	    menu();
	    cout<<"\nOpcion: ";cin>>opc;
	    if(opc == 1){
	        int aux;
	        cout<<"Cuantos elementos desea ingresar?: ";cin>>aux;
	        for(int i=0;i<aux;i++){
	            int x;
	            cout<<"Numero "<<i+1<<": ";cin>>x; 
	            cola->insertar_elemento(x);
	        }
	    }
	    else if(opc == 2){
	        cola->eliminar_elemento();
	        cout<<"Elemento eliminado";
	    }
	    else if(opc == 3){
	        int aux;
	        cout<<"Busque un elemento: ";cin>>aux;
	        if(cola->buscar_elemento(aux)) cout<<"Elemento encontrado";
	        else cout<<"Elemento NO encontrado";
	    }
	    else if(opc == 4){
	        cout<<endl<<"Datos: ";
	        cola->mostrar_cola();
	        cout<<endl;
	    }
	    else if(opc == 5){
	        int aux;
	        cout<<"Numero de iteraciones: ";cin>>aux;
	        cola->hombres_mujeres(aux);
	    }
	    else if(opc == 6){
	        cout<<"Programa terminado";
	        break;
	    }
	    
	}

	
	return 0;
}
