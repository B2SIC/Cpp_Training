#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int dia, widthRatio, heightRatio;
    double diaRatio, realWidth, realHeight;
    cin >> dia >> heightRatio >> widthRatio;

    diaRatio = sqrt(widthRatio * widthRatio + heightRatio * heightRatio);
    realWidth = (dia * widthRatio) / diaRatio;
    realHeight = (dia * heightRatio) / diaRatio;

    cout << int(realHeight) << " " << int(realWidth) << endl;
    return 0;
}