#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int i = 1;
    int getNum;
    int count = 0;
    string strNum;

    cin >> getNum;

    while(true)
    {
        strNum = to_string(i);
        if(strNum.find("666", 0) != -1)
            count++;

        if(count == getNum)
            break;
        else
            i++;
    }

    cout << i << endl;
    return 0;
}