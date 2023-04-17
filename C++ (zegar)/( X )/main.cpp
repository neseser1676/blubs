#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    while(true)
    {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;
    int second = ltm->tm_sec;

    cout << "Time: " << hour << ":" << (minute < 10 ? "0" : "") << ":" << second << endl;


    _sleep(1000);
    system("cls");
    }

    return 0;
}
