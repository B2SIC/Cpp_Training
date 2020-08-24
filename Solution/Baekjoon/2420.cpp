#include <iostream>

using namespace std;

long long abValue(long long a, long long b)
{
    if(a - b > 0)
        return a - b;
    else
        return -(a - b);
}

int main()
{
    int N, M;
    long long diff;
    cin >> N >> M;
    diff = abValue(N, M);
    cout << diff << endl;
    return 0;
}