#include <iostream>

using namespace std;

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba % 2==0)
    {
        cout << "Liczba jest parzysta." << endl;
    }
    else
    {
        cout << "Liczba jest nieparzysta";
    }


    return 0;
}
