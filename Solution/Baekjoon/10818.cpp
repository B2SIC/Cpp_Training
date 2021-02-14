#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    int getNum;
    int maxNum = -1000000;
    int minNum = 10000000;
    vector<int> v;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> getNum;
        v.push_back(getNum);
    }

    for(int s : v)
    {
        if(s > maxNum)
            maxNum = s;
        
        if(s < minNum)
            minNum = s;
    }

    cout << minNum << " " << maxNum << endl;

    return 0;
}