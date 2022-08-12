#include <iostream>
using namespace std;

template <int base, int exp>
struct Potencia
{
    enum { value = base * Potencia<base, exp - 1>::value };
};
template <int base>
struct Potencia <base,0>
{
    enum { value = 1 };
};
int main()
{
    int x = Potencia<5,3>::value;
    cout << "5 elevado al cubo es: " << x << endl;
}
