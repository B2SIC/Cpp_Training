#include <iostream>

using namespace std;

int main()
{
    char arrHex[6] = { 0 };
    cin >> arrHex;

    int decNumber = strtol(arrHex, NULL, 16);
    cout << decNumber << endl;
    return 0;
}