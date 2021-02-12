#include <iostream>

using namespace std;

int main()
{
    int N;
    int x = 1;
    int y = 1;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
            x++;
        else
            y++;
    }

    cout << x * y << endl;
    return 0;
}
