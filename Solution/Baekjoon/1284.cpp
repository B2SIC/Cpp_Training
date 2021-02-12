#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string getNum;
    vector<int> v;

    while(true)
    {
        int size = 2;
        cin >> getNum;

        if(getNum == "0")
            break;
        
        size += getNum.length() - 1;

        while(getNum.empty() == 0)
        {
            if(getNum.back() - '0' == 1)
                size += 2;
            else if(!(getNum.back() - '0'))
                size += 4;
            else
                size += 3;

            getNum.pop_back();
        }

        v.push_back(size);
    }

    for(int s : v)
        cout << s << endl;

    return 0;
}