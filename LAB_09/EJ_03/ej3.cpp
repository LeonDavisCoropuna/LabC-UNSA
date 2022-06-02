#include <iostream>

using namespace std;

template <typename T, typename S>

class Correo{
    private:
        T letra;
        S apellido;
    public:
        Correo(T,S);
        ~Correo(){}
        
        S generarCorreo(){
            S corr(1,letra);
            corr += "/"+apellido+"@unsa.edu.pe";
            return corr;
        }
};

template <typename T, typename S>
Correo <T,S> :: Correo(T _letra, S _apellido){
    letra = _letra;
    apellido = _apellido;
}


