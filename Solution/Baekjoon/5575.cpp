#include <iostream>

using namespace std;

int main()
{
    int timeTable[3][6];
    int workingTime[3][3] = {0, };

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 6; j++)
            cin >> timeTable[i][j];

    for(int k = 0; k < 3; k++)
        for(int l = 0; l < 3; l++)
            workingTime[k][l] = timeTable[k][l + 3] - timeTable[k][l];
            
    for(int a = 0; a < 3; a++)
    {
        for(int b = 2; b >= 0; b--)
        {
            if(workingTime[a][b] < 0 && b != 0)
            {
                workingTime[a][b] = workingTime[a][b] + 60;
                workingTime[a][b - 1] -= 1;
            }
        }
    }

    // print
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << workingTime[i][j] << " ";
        
        cout << endl;
    }

    return 0;
}