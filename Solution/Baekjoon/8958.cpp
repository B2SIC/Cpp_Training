#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    string getLine;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int accCount = 0;
        int totalScore = 0;

        cin >> getLine;

        for(char c : getLine)
        {
            if(c == 'O')
            {
                accCount++;
                totalScore += accCount;
            }else if(c == 'X')
                accCount = 0;
        }

        cout << totalScore << endl;
    }

    return 0;
}