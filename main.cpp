#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Run commands:" << endl;
    if (system( NULL )) {
    system("color 02");
    system("cls");
    system("help");
    system("color 07");
    }

    return 0;
}
