#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    long long totalProducingCost = 0;
    long long profit = 0;
    int count = 0;

    cin >> A >> B >> C;

    totalProducingCost = A;

    if(B >= C)
    {
        cout << -1 << endl;
        return 0;
    }else
    {
        profit = C - B;
        count = A / profit;
    }

    cout << count + 1 << endl;

    return 0;
}