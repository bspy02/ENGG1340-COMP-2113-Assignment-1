#include <iostream>
using namespace std;

int main()
{
    short m,n,a,b,c,d;
    cout<< "a: "; cin >> a;
    cout<< "b: "; cin >> b;
    cout<< "Divisor 1: ";
    cin >> c;
    cout<< "Divisor 2: ";
    cin >> d;

    cout<< "M "<< c <<' '<< d << '\n';
    for (int i = a; i < b; ++i)
    {
        int e = (i%c==0);
        int f = (i%d==0);
        cout<< i <<' ' << e << ' ' << f << '\n';
    }
}