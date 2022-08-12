#include <iostream>
#include <vector>

using namespace std;

class Punto{
    public:
        int x,y;
        Punto(int _x,int _y) : x(_x) , y(_y) {}
};

class RegresionLineas{
    public:
    
        vector <Punto> numeros;
        RegresionLineas(vector <Punto> Numeros) : numeros(Numeros) {}
      
        vector <float> operator()(){
            vector <float> resul;
            
            float m;
            float y;
            float paso1 = 0;
            float paso2 = 0;
            float paso3 = 0;
            float paso4 = 0;
            float b = 0,a = 0;
            for(auto i = numeros.begin(); i!= numeros.end(); i++){
                
                paso1 += (i->x * i->y);
                
                b += i->x;
                a += i->y;
                
                paso3 += (i->x)*(i->x); 
            }
            paso1 *= numeros.size();
            paso2 = b*a;
            paso3 *= numeros.size();
            paso4 = b*b;

            a = a/numeros.size();
            b = b/numeros.size();
        
            m = (paso1 - paso2) / (paso3 - paso4);
            y = a - m*(b);
            

            resul.push_back(y);
            resul.push_back(a);
            resul.push_back(m);
            resul.push_back(b);
            return resul;
        }
};

int main()
{
    vector <Punto> numeros; 
    
    Punto  ob(1,2); 
    Punto ob1(2,3); 
    Punto ob2(2,4); 
    Punto ob3(3,4); 
    Punto ob4(4,4); 
    Punto ob5(4,6); 
    Punto ob6(5,5); 
    Punto ob7(6,7); 
    
    numeros.push_back(ob);
    numeros.push_back(ob1);
    numeros.push_back(ob2);
    numeros.push_back(ob3);
    numeros.push_back(ob4);
    numeros.push_back(ob5);
    numeros.push_back(ob6);
    numeros.push_back(ob7);
    
    RegresionLineas linea(numeros);
    
    vector <float> aux = linea();
    
    cout<<" y = "<<aux[0] << " a = " <<aux[1] << " b = " << aux[2] <<" x = " << aux[3];
    cout<<aux[1];

    return 0;
}
