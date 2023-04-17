#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double p, P;

    cout << "Podaj dlugosc bokow trojkata: " << endl;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Trojkat o bokach " << a << ", " << b << ", " << c << " istnieje." << endl;
    }
    else
    {
        cout << "Trojkat o bokach " << a << ", " << b << ", " << c << " nie istnieje." << endl;
    }

    p = (a+b+c)/2;
    P = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << "Pole trojkata wynosi: " << P;
    return 0;
}
