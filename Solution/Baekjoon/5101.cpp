#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    int start = -1, sequence = -1, target = -1;

    while(true)
    {
        int count = 1;

        cin >> start >> sequence >> target;

        if (start == 0 && sequence == 0 && target == 0)
            break;
        
        for(start; start <= target; start += sequence)
        {
            if(start == target)
            {
                v.push_back(count);
                break;
            }else{
                count++;
            }
        }

        if(start > target)
            v.push_back(-1);
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] != -1)
            cout << v[i] << endl;
        else
            cout << 'X' << endl;
    }
    return 0;
}   