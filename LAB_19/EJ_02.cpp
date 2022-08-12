#include <iostream>
#include <vector>

using namespace std;

class FIND{
    public:
        vector <int> numeros;
        FIND(vector <int> Numeros) : numeros(Numeros) {}
    
        vector <int> operator()(int index, int end, int num){
            vector <int> aux;

            for(int i = index; i < end ; i++){
                if(numeros[i] == num){
                    aux.push_back(i);
                }
            }
            return aux;
        }
};

int main()
{
    vector <int> numeros; 
    
    numeros.push_back(5);

    numeros.push_back(8);
    numeros.push_back(5);
    numeros.push_back(6);
    numeros.push_back(7);
    numeros.push_back(5);

    numeros.push_back(8);
    numeros.push_back(8);
    
    FIND linea(numeros);
    
    vector <int> aux = linea(1,6,5);
    cout<<"Nros:\tIndices:\n";
    for(int i = 0; i < numeros.size() ; i++)
        cout<< numeros[i] << "\t" << i <<endl;
    cout<<endl<<"Index: 1 , End: 6 , Num: 5\nIndices donde aparece el 5: \n";
    for(auto i = aux.begin(); i != aux.end(); i++){
        cout<<*i<<endl;
    }

    return 0;
}
