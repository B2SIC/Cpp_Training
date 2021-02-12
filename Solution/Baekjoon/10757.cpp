#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string big_add(string n1, string n2){
    string add_result = "";
    
    int carry = 0;
    int num_result = 0;
    int add_tmp = 0;

    while(n1.empty() == 0 && n2.empty() == 0)
    {
        add_tmp = (n1.back() - '0') + (n2.back() - '0') + carry;
        carry = add_tmp / 10;
        add_result.push_back((add_tmp % 10) + '0');

        n1.pop_back();
        n2.pop_back();
    }
    
    if(n1.empty() && n2.empty() && carry != 0)
        add_result.push_back(carry + '0');
    
    // n1 still has number.
    if(n1.empty() == 0)
    {
        while(carry != 0 && n1.empty() == 0)
        {
            add_tmp = (n1.back() - '0') + carry;
            carry = add_tmp / 10;
            add_result.push_back((add_tmp % 10) + '0');

            n1.pop_back();
        }

        if(carry != 0 && n1.empty())
            add_result.push_back(carry + '0');
        else
        {
            // carry does not exist.
            for(int i = 0; i < n1.length(); i++)
            {
                add_result.push_back(n1.back());
                n1.pop_back();
            }
        }

    // n2 still has number.
    }else if(n2.empty() == 0)
    {
        while(carry != 0 && n2.empty() == 0)
        {
            add_tmp = (n2.back() - '0') + carry;
            carry = add_tmp / 10;
            add_result.push_back((add_tmp % 10) + '0');

            n2.pop_back();
        }

        if(carry != 0 && n2.empty())
            add_result.push_back(carry + '0');
        else
        {
            // carry does not exist.
            for(int i = 0; i < n2.length(); i++)
            {
                add_result.push_back(n2.back());
                n2.pop_back();
            }
        }
    }

    reverse(add_result.begin(), add_result.end());
    return add_result;
}

int main()
{
    string n1, n2;

    cin >> n1 >> n2;
    cout << big_add(n1, n2) << endl;

    return 0;
}