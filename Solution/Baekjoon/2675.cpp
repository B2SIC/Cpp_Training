#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    int iter;
    string strS;
    vector<string> v;

    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        string strTmp = "";
        cin >> iter >> strS;

        for(char s : strS)
        {
            for(int j = 0; j < iter; j++)
            {
                strTmp.push_back(s);
            }
        }
        v.push_back(strTmp);
    }

    for(string s : v)
        cout << s << endl;
        
    return 0;
}