#include <iostream>

template <class T>

class Contendor { 
    T elemento;
    public: 
        Contendor (T arg ) {
            elemento = arg ;
        } 
        T add() { return ++elemento; }
};
template<>
class Contendor<char> { 
    char elemento;
    public:
        Contendor (char arg ) { elemento = arg;} 
        char uppercase() {
            if ((elemento >= 'a') && (elemento <= 'z')) { elemento += 'A'-'a'; }
        return elemento;
        }
};

int main() {

    Contendor<int> cint (10); 
    Contendor<char> cchar('s');

    std::cout << cint.add() << std::endl; 
    std::cout << cchar.uppercase() << std::endl;

    return 0;
}
