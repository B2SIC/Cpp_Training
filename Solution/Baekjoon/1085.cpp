#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int xw, yh, xx, yy;

    xw = w - x;
    yh = h - y;
    xx = x - 0;
    yy = y - 0;

    cout << min(min(xw, yh), min(xx, yy)) << endl;
    return 0;
}