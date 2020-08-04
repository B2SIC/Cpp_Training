#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int value = 0;
    cin >> x >> y;

    if (x > 0)
    {
        if (y > 0)
            value = 1;
        else
            value = 4;        
    }else
    {
        if (y > 0)
            value = 2;
        else
            value = 3;
    }

    cout << value << endl;
    return 0;
}