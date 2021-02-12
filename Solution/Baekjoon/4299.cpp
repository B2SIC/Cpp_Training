#include <iostream>

using namespace std;

int main()
{
    int add, gap;
    int x, y;

    cin >> add >> gap;

    if ((add + gap) % 2 != 0 || (add - gap) % 2 != 0 || add < gap)
    {
        cout << -1 << endl;
    }else{
        x = (add + gap) / 2;
        y = (add - gap) / 2;

        cout << x << " " << y << endl;
    }
    
    return 0;
}