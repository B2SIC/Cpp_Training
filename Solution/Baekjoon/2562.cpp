#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int getNum;
    int index = 0;
    int maxNum = 0;
    vector<int> v;
    for(int i = 0; i < 9; i++)
    {
        cin >> getNum;
        v.push_back(getNum);
    }
    for(int k = 0; k < v.size(); k++)
    {
        if(maxNum < v[k])
        {
            maxNum = v[k];
            index = k + 1;
        }
    }
    cout << maxNum << endl;
    cout << index << endl;
    return 0;
}