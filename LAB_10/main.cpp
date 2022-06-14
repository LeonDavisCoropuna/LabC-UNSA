#include "lista.h"
#include "iostream"
#include "ctime"

using namespace std;

int main(){

    Lista *lista = new Lista();
    cout<<"Numeros: ";
    for(int i=0;i<10000;i++){
        int num = 1 + rand() % (100000-1);
        cout<<num<< "  ";
        lista->insertar_inicio(num);
    }

    unsigned t0,t1;
    t0 = clock(); //inicia el marcador de tiempo
    lista->quickSort_descendente();
    t1 = clock(); //termina el marcador de tiempo 
    double time = (double(t1-t0)/CLOCKS_PER_SEC); //obtiene los segundos
    cout<<"\nLista ordenada\n";
    lista->mostrar_lista();
    cout <<"\nTiempo de ejecucion algoritmo Quicksort: " << time << endl;
    
    return 0;
}
