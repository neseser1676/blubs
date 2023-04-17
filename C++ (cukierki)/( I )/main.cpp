#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie: ";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout << "Liczba cukierkow dla kazdego ucznia: " << x;

    y = cukierki-x*(uczniowie-1);
    cout <<endl<< "Liczba cukierkow dla mnie: " << y <<endl;

    return 0;
}
