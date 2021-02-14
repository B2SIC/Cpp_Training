#include <iostream>
#include <set>

using namespace std;

int main()
{
    int getNum;
    set<int> s;

    for(int i = 0; i < 10; i++)
    {
        cin >> getNum;
        s.insert(getNum % 42);
    }

    cout << s.size() << endl;

    return 0;
}