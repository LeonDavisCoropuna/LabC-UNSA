#include <iostream>
#include "string.h"
using namespace std;

void separador(){
    cout<<"\n--------------------------------\n";
}

void mostrar(void **inicio){
    cout<<"\nProductos de la tienda:\n";
    cout<<"Nombre\tCodigo\tPrecio\tStock\tEstado\n";
    while(inicio){ 

        int *stock = (int*)(inicio[0]);
        float *precio = (float*)(inicio[1]);
        int *codigo = (int*)(inicio[2]);
        string *nombre = (string*)(inicio[3]);
        bool *estado = (bool*)(inicio[4]);

        cout<<*(string*)(nombre);
        cout<<"\t"<<*(int*)(codigo);
        cout<<"\t"<<*(float*)(precio);
        cout<<"\t"<<*(int*)(stock);
        if(*estado == true){cout<<"\tEn ALTA\n";}
        else{cout<<"\tEn BAJA\n";}
        
        inicio = (void **)inicio[6];
    }
}


void **nuevo_nodo(){
    void **elemento;
    int *stock = new int;
    float *precio = new float;
    int *codigo = new int;
    string *nombre = new string;
    bool *estado = new bool;
    cout<<"\tNombre: ";cin>>*nombre;
    cout<<"\tCodigo: ";cin>>*codigo;
    cout<<"\tPrecio: ";cin>>*precio;
    cout<<"\tStock: ";cin>>*stock;

    if(*stock <= 0) {*estado = false;}
    else {*estado = true;}

    elemento = new void *[6];

    elemento[0] = stock;
    elemento[1] = precio;
    elemento[2] = codigo;
    elemento[3] = nombre;
    elemento[4] = estado;
    elemento[5] = NULL;

    return elemento;
}
void insertar_nodo(void **&inicio, void **nuevo_nodo){
    void **p = inicio,   **ant = NULL;
    while(p){ 
        ant = p;
        p = (void**)p[6];
    }
    nuevo_nodo[6] = p;  
    if (ant != NULL)  ant[6] = nuevo_nodo;
    else inicio = nuevo_nodo;
}


void **buscar(void **inicio,string nombre){//buscar por nombre
    void **p = inicio;
    while(p){
        if(*(string*)p[3] == nombre){
            return p;
        }
        p = (void**)p[6];  
    }
    return NULL;
}
void **buscar(void **inicio,int codigo){ //buscar por codigo
    void **p = inicio;
    while(p){
        if(*(int*)p[2] == codigo){
            return p;
        }
        p = (void**)p[6];  
    }
    return NULL;
}

void dar_de_alta(void **&inicio){
    int num,n;
    while(true){
        cout<<"\n\t1: Ingresar nuevo producto\n\t2: Dar de alta el producto\n\t3: Salir\n\tOpc: ";cin>>num;
        if(num == 1){
            cout<<"\t\tCuantos productos deseas ingresar? ";cin>>n;
            for(int i=0;i<n;i++){
                cout<<"\nProducto "<<i+1<<endl;
                void **aux = nuevo_nodo();
                insertar_nodo(inicio,aux);
            }
        }
        else if(num == 2){
            void **aux;
            int opc,codigo;
            string name;
            cout<<"\t1: Buscar por nombre\n\t2: Buscar por codigo\n\tOpc: ";cin>>opc;
            cin.ignore();
            if(opc == 1){
                cout<<"Nombre del producto: ";getline(cin,name);
            }
            else{
                cout<<"Codigo del producto: ";cin>>codigo;
            }

            if(buscar(inicio,name) != NULL){
                aux = buscar(inicio,name);
            } else if(buscar(inicio,codigo) != NULL){
                aux = buscar(inicio,codigo);
            }
            else{
                cout<<"Producto no encontrado\n";
                return;
            }
            *(bool *)aux[4] = true;
            cout<<"Cambio realizado con exito\n";
        }
        else if(num == 3){return;}
        else{cout<<"Opcion no valida\n";}
    }

}

void dar_de_baja(void **&inicio){
    int num,codigo;
    string name;
    cout<<"\t1. Buscar por nombre\n\t2. Buscar por codigo\n\tOpc: ";cin>>num;
    cin.ignore();
    if(num == 1){
        cout<<"\t\tNombre del producto: ";getline(cin,name);
    }
    else{
        cout<<"\t\tCodigo del producto: ";cin>>codigo;
    }
    void **aux;
    if(buscar(inicio,name) != NULL){
        aux = buscar(inicio,name);
    } else if(buscar(inicio,codigo) != NULL){
        aux = buscar(inicio,name);
    }
    else{
        cout<<"Producto no encontrado\n";
        return;
    }
    *(bool *)aux[4] = false;
    cout<<"\t\tCambio realizado con exito\n";
}


void modificar(void **&inicio){ 
    int num,codigo;
    string name;
    cout<<"\t1: Modificar por nombre\n\t2 Modificar por codigo\n\tOpc: ";cin>>num;
    cin.ignore();
    if(num == 1){
        cout<<"\t\tNombre del producto: ";getline(cin,name);
    }
    else{
        cout<<"\t\tCodigo del producto: ";cin>>codigo;
    }
    void **p;
    if(buscar(inicio,name) != NULL) p = buscar(inicio,name);
    if(buscar(inicio,codigo) != NULL) p = buscar(inicio,codigo);

    if(buscar(inicio,name) != NULL || buscar(inicio,codigo) != NULL){
        while(true){
            int opc;
            cout<<"\t¿Que desea modificar?\n\t\t1. Nombre\n\t\t2. Precio\n\t\t3. Stock\n\t\t4.Terminar\n\t\tOpcion: ";cin>>opc;
            cin.ignore();
            if(opc == 1){
                cout<<"\t\t\tNuevo nombre: ";getline(cin,*(string*)(p[3]));
            }
            else if(opc == 2){
                cout<<"\t\t\t\tNuevo precio: ";cin>>(*(float*)(p[1]));
            }
            else if(opc == 3){
                cout<<"\t\t\t\tNuevo stock: ";cin>>(*(int*)(p[0]));
            }
            else if(opc == 4) return;
            else {cout<<"\t\t\tOpcion no valida\n";}
        }
    }
    else{
        cout<<"\t\tProducto no encontrado\n";
        return;
    }
} 


int main(){
    void **tienda = NULL, **nodo;
    bool band = true;
    int opc;
    while(band){
        cout<<"1. Insertar nodo\n2. Dar de alta\n3. Dar de baja\n4. Buscar\n5. Modificar\n6. Mostrar \n7. Terminar\nOpcion: ";cin>>opc;
        separador();
        cin.ignore();
        if(opc == 1){
            nodo = nuevo_nodo();
            insertar_nodo(tienda,nodo);
            separador();
        }
        else if(opc == 2){
            dar_de_alta(tienda);
            separador();
        }
        else if(opc == 3){
            dar_de_baja(tienda);
            separador();
        }
        else if(opc == 4){
            int bus,codigo;
            bool x = false;
            string name;
            cout<<"\t1. Buscar por nombre\n\t2. Buscar por codigo\n\tOpc: ";cin>>bus;
            cin.ignore();
            if(bus == 1){
                cout<<"\t\tEscriba el nombre: ";getline(cin,name);
                if(buscar(tienda,name) != NULL){
                    cout<<"\t\tProducto encontrado\n";
                    x = true;
                }   
            }
            if(bus == 2){
                cout<<"\t\tEscriba el codigo: ";cin>>codigo;
                if(buscar(tienda,codigo) != NULL){
                    cout<<"\t\tProducto encontrado\n";
                    x = true;
                }
            }
            
            if(x == false){cout<<"\t\tProducto NO encontrado\n";}
            separador();
        }
        else if(opc == 5){
            modificar(tienda);
            separador();
        }
        else if(opc == 6){
            mostrar(tienda);
            separador();
        }
        else if(opc == 7){
            band = false;
        }
        else{cout<<"Opcion no valida\n";}
        

    }

   
    return 0;
}

