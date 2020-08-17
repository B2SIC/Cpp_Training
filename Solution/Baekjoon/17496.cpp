#include <iostream>

using namespace std;

int main()
{
    int N, T, C, P;
    int days = 1;
    int count = 0;
    cin >> N >> T >> C >> P;

    while(true)
    {
        if(days + T <= N)
        {
            days += T;
            count++;
        }else{
            break;
        }
    }

    cout << count * C * P << endl;
    return 0;
}