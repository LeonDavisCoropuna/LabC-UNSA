#include <iostream>
using namespace std;
template <class T>

class Operacion {
    private:
        T x,y;
    public:
        Operacion(T a, T b) : x(a) , y(b) {}
        Operacion(){
            x = 0;
            y = 0;
        }
        void setA(T a){
            x = a;
        }
        void setB(T b){
            y = b;
        }
        
        T suma(){return x+y;}
        T resta(){return x-y;}
        T multiplicacion(){return x*y;}
        T division(){return x/y;}
        
};

int main() {
    
    Operacion <int> op;
    int opc,x,y;
    bool band = true;
    while(band){
        cout<<"\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Terminar\nOpc: ";cin>>opc;
        if(opc == 1){
            cout<<"\tValor 1: ";cin>>x; op.setA(x);
            cout<<"\tValor 2: ";cin>>y; op.setB(y);
            cout<<"\tResultado: "<<op.suma();
        }
        if(opc == 2){
            cout<<"\tValor 1: ";cin>>x; op.setA(x);
            cout<<"\tValor 2: ";cin>>y; op.setB(y);
            cout<<"\tResultado: "<<op.resta();
        }
        if(opc == 3){
            cout<<"\tValor 1: ";cin>>x; op.setA(x);
            cout<<"\tValor 2: ";cin>>y; op.setB(y);
            cout<<"\tResultado: "<<op.multiplicacion();
        }
        if(opc == 4){
            cout<<"\tValor 1: ";cin>>x; op.setA(x);
            cout<<"\tValor 2: ";cin>>y; op.setB(y);
            cout<<"\tResultado: "<<op.division();
        }
        if(opc == 5){
            band = false;
        }
        
    }

    return 0;
}
