#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

using namespace std;

class Elemento{
    private:
        int a,b;
    public:
        Elemento(){
            a = 0;
            b = 0;
        }
        Elemento(int _a, int _b) : a(_a) , b(_b) {}
        
        int getA(){return a;}
        void setA(int _a){a = _a;}
        
        int getB(){return b;}
        void setB(int _b){b = _b;}

};

bool comp(Elemento obj1 , Elemento obj2){
    return obj1.getA() < obj2.getB();
}

class Lista{
    private:
        vector <Elemento> lista;
    public:
        Lista(){}
        void push (int _a,int _b){
            Elemento obj(_a,_b);
            lista.push_back(obj);
        }
        
        void operator()(){
            sort(lista.begin(), lista.end(), &comp);
        }
        
        void mostrar_vector(){
            for(auto& elem : lista){
                cout << elem.getA() << " - "  << elem.getB() << endl;
            }
        }
};

int main(){
    Lista lista;
    
    srand(time(NULL));
    for(int i=0;i<20;i++){
        lista.push(1+rand()%10,1+rand()%10);
    }
    cout<<"Sin ordenar:\n";
    lista.mostrar_vector();

    lista();
    cout<<endl<<endl;
    cout<<"Lista ordenada:\n";
    lista.mostrar_vector();
    return 0;
}
