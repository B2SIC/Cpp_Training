#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, a, b;
    cin >> T;

    vector<int> resultArr;

    for(int i = 0; i < T; i++)
    {
        cin >> a >> b;

        int serialNum = a;

        if(serialNum > 10)
        {
            serialNum %= 10;
        }

        for(int j = 1; j < b; j++)
        {
            serialNum *= a;

            if(serialNum > 10)
            {
                serialNum %= 10;
            }
        }
        
        if(serialNum == 0)
        {
            resultArr.push_back(10);
        }else
        {
            resultArr.push_back(serialNum);
        }
        
    }

    for(int n : resultArr){
        cout << n << endl;
    }

    return 0;
}