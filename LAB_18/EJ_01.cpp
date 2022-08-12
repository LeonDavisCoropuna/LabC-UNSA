#include <iostream>
using namespace std;

template <int N>
struct SumaDigitos
{
    enum { value = N%10 + SumaDigitos <N/10>::value };
};
template <>
struct SumaDigitos <0>
    {
        enum { value = 0 };
    };
int main()
{
    const int num = 123456789;
    int sumDigit = SumaDigitos<num>::value;
    cout <<"La suma de los digitos de 123456789 es: " <<sumDigit << endl;

    return 0;
}
