#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    int YCost = 0;
    int MCost = 0;
    cin >> T;

    int getTime;
    vector<int> v;

    for(int i = 0; i < T; i++)
    {
        cin >> getTime;
        v.push_back(getTime);
    }

    for(int time : v)
    {
        // Y
        YCost += 10 * ((time / 30) + 1);
        // M
        MCost += 15 * ((time / 60) + 1);
    }

    if(YCost > MCost)
    {
        cout << "M " <<  MCost << endl;
    }else if(YCost < MCost)
    {
        cout << "Y " << YCost << endl;
    }else
    {
        cout << "Y M " << YCost << endl;
    }

    return 0;
}