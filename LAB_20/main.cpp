/*
//EJERCICIO 1
#include <iostream>
using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point(double _x,double _y) : x(_x) , y(_y) {}
        void X(double _x){
            x = _x;
        }
        void Y(double _y){
            y = _y;
        }
};

int main(){

    double* d = new double(1.0);     //paso1
    Point* pt = new Point(1.0, 2.0); //paso2
    
    *d = 2.0; //paso3

    (*pt).X(3.0); //paso4
    (*pt).Y(3.0); //paso5

    pt->X(3.0); //paso6
    pt->Y(3.0); //paso7

    delete d; //paso8
    delete pt; //paso9

    return 0;
}
*/

/*
//EJERCICIO 2
#include <iostream>
#include <memory>
using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point(double _x,double _y) : x(_x) , y(_y) {}
        void X(double _x){
            x = _x;
        }
        void Y(double _y){
            y = _y;
        }
};

int main(){

    unique_ptr <double> d = make_unique <double> (1.0);
    unique_ptr <Point> pt = make_unique <Point> (1.0,2.0);
    
    *d = 2.0; 

    (*pt).X(3.0); 
    (*pt).Y(3.0);

    pt->X(3.0); 
    pt->Y(3.0); 

    return 0;
}
*/


//EJERCICIO 3
#include <iostream>
#include <memory>
using namespace std;

class C1{
    private:
        shared_ptr <double> d;
    public:
        C1(shared_ptr <double> value) : d(value) {}
        virtual ~C1() { cout << "\nC1 destructor\n"; }
        void print() const { cout << "Valor " << *d; }
};

class C2{
    private:
        shared_ptr <double> d;
    public:
        C2(shared_ptr <double> value) : d(value) {}
        virtual ~C2() { cout << "\nC2 destructor\n"; }
        void print() const { cout << "Valor " << *d; }
};

int main() {

    shared_ptr <double> d = make_shared<double>(1.2);

    shared_ptr <C1> c1 = make_shared <C1> (d);
    shared_ptr <C2> c2 = make_shared <C2> (d);

    c1->print();
    cout<<endl;
    c2->print();

    cout<<endl<<"El shared_ptr d se usa "<<d.use_count()<<" veces";

    return 0;
}



/*
//EJERCICIO 4
#include <iostream>
#include <memory>
using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point(double _x,double _y) : x(_x) , y(_y) {}
        void X(double _x){
            x = _x;
        }
        void Y(double _y){
            y = _y;
        }
        void mostrar(){
            cout<< "X: "<<x<<" Y: "<<y<<endl;
        }
};

int main(){

    unique_ptr <double> d = make_unique <double> (1.0);
    unique_ptr <Point> pt = make_unique <Point> (1.0,2.0);
    
    *d = 2.0; 

    (*pt).X(3.0); 
    (*pt).Y(3.0);

    pt->X(3.0); 
    pt->Y(3.0); 

    shared_ptr <double> D = move(d);
    shared_ptr <Point> P = move(pt);

    //Luego de usar shared_ptr, ocurre un error
    //si quiero usar los unique_ptr

    cout<< *D <<endl;
    P->mostrar();

    return 0;
}
*/

/*
//EJERCICIO 5
#include <iostream>
#include <memory>
using namespace std;

class Point{
    private:
        double x,y;
    public:
        Point(double _x,double _y) : x(_x) , y(_y) {}
        void X(double _x){
            x = _x;
        }
        void Y(double _y){
            y = _y;
        }
        void mostrar(){
            cout<< "X: "<<x<<" Y: "<<y<<endl;
        }
};

int main(){

    unique_ptr <double> d = make_unique <double> (1.0);
    unique_ptr <Point> pt = make_unique <Point> (1.0,2.0);
    
    *d = 2.0; 

    (*pt).X(3.0); 
    (*pt).Y(3.0);

    pt->X(3.0); 
    pt->Y(3.0); 

    shared_ptr <double> D = move(d);
    shared_ptr <Point> P = move(pt);

    weak_ptr <double> D2 = D;
    weak_ptr <Point> P2 = P;

    shared_ptr <double> D3 = D2.lock();
    shared_ptr <Point> P3 = P2.lock();

    cout<< *D3 <<endl;
    P3->mostrar();

    return 0;
}
*/
