#include <iostream>
#include <ctime>
using namespace std;

template <class T>
class Nodo{
    public:
        T dato;
        Nodo <T> *izq, *der;
        Nodo(){
            dato = 0;
            Nodo <T> *izq = NULL;
            Nodo <T> *der = NULL;
        }
};
template <class T>
class Arbol{
    private:
    Nodo <T>* raiz;
    public:
        Arbol(){raiz = NULL;}
        Nodo <T>* crearNodo(T x){
            Nodo <T> *nuevoNodo = new Nodo <T>;
            nuevoNodo->dato = x;
            nuevoNodo->izq = NULL;
            nuevoNodo->der = NULL;
            return nuevoNodo;
        }
        void insertar(Nodo <T>*& arbol,T dato){
            if(arbol==NULL){
                arbol = crearNodo(dato);
            }
            else if(dato < arbol->dato)
                insertar(arbol->izq, dato);
            else if(dato > arbol->dato)
                insertar(arbol->der, dato);
        }
        void verArbol(Nodo<T>* arbol,int n){
            if(arbol==NULL)
                return;
            verArbol(arbol->der, n+1);
            for(int i=0; i<n; i++)
                cout<<"\t ";
            cout<< arbol->dato <<endl;
            verArbol(arbol->izq, n+1);
        }
        Nodo <T>*& getRaiz(){return raiz;}
};

int main(){
    Arbol <int> arbol;
    srand(time(NULL));
    for(int i=0;i<100;i++){
        int num = rand() % (100 - 1);
        arbol.insertar(arbol.getRaiz(),num);
    }
    arbol.verArbol(arbol.getRaiz(),0);

    return 0;
}
