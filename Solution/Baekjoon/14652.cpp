#include <iostream>

using namespace std;

int main()
{
    int N, M, K;
    int x = 0, y = 0;
    cin >> N >> M >> K;

    x = K / M;
    y = K % M;

    cout << x << " " << y << endl;
    return 0;
}