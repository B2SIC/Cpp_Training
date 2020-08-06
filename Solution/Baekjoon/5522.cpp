#include <iostream>

using namespace std;

int main()
{
    int getScore;
    int sum = 0;
    for(int i = 0; i < 5; ++i)
    {
        cin >> getScore;
        sum += getScore;
    }

    cout << sum << endl;
    return 0;
}