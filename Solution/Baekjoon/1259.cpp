#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    string ss;
    string rev_ss;
    while(true)
    {
        cin >> num;
        ss = to_string(num);

        if(num == 0)
            break;

        rev_ss = ss;
        reverse(rev_ss.begin(), rev_ss.end());

        if(ss == rev_ss)
            cout << "yes" << endl;
        else
            cout << "no" << endl;   
    }
    return 0;
}