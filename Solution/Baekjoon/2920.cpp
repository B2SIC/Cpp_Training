#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    int expectation = 0;
    string judge = "";
    vector<int> v;

    for(int i = 0; i < 8; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    if(v[0] != 1 && v[0] != 8)
        judge = "mixed";
    else if(v[0] == 1)
        judge = "ascending";
    else if(v[0] == 8)
        judge = "descending";

    for(int k = 1; k < v.size(); k++)
    {
        if(v[k] == v[k - 1] + 1 && judge == "ascending")
            judge = "ascending";
        else if(v[k] == v[k - 1] - 1 && judge == "descending")
            judge = "descending";
        else
            judge = "mixed";
    }

    cout << judge << endl;
    return 0;
}