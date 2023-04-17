#include <iostream>

using namespace std;

int main()
{
    double bokA, bokB, pole, obwod;

    cout << "Podaj dlugosc boku a: ";
    cin >> bokA;

    cout << "Podaj dlugosc boku b: ";
    cin >> bokB;

    pole = bokA*bokB;
    obwod = 2*bokA+2*bokB;

    cout << "Pole prostokatu wynosi: " << pole << endl;
    cout << "Obwod prostokatu wynosi: " << obwod << endl;
    return 0;
}
