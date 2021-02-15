#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if(a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    vector<string> s;
    vector<string>::iterator it;
    int T;
    string dup;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        string ss;
        cin >> ss;

        s.push_back(ss); 
    }

    sort(s.begin(), s.end(), compare);

    for(string ss : s)
    {
        if(ss == dup)
            continue;

        cout << ss << endl;
        dup = ss;
    }

    return 0;
}