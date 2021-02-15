#include <iostream>
#include <algorithm>

using namespace std;

int getMinRepaint(char **chessArr, int n, int m, char compare_color)
{
    int idx_X = 0;
    int idx_Y = 0;
    int min_count = 64;
    int compare_count = 0;

    while(idx_X <= n - 8 && idx_Y <= m - 8)
    {
        compare_count = 0;

        for(int i = idx_X; i < idx_X + 8; i++)
        {
            for(int j = idx_Y; j < idx_Y + 8; j++)
            {
                if(chessArr[i][j] == compare_color && compare_color == 'W')
                {
                    if(j != idx_Y + 7)
                        compare_color = 'B';
                }else if(chessArr[i][j] == compare_color && compare_color == 'B')
                {
                    if(j != idx_Y + 7)
                        compare_color = 'W';
                }else
                {
                    compare_count++;

                    if(j != idx_Y + 7)
                    {
                        if(compare_color == 'W')
                            compare_color = 'B';
                        else
                            compare_color = 'W';
                    }
                }
            }
        }

        idx_Y++;

        if(idx_Y > m - 8)
        {
            idx_X++;
            idx_Y = 0;
        }

        if(min_count > compare_count)
            min_count = compare_count;
    }

    return min_count;
}

int main()
{
    int n, m;
    int minValue;
    char color;
    cin >> n >> m;

    // make array
    char **chessArr = new char*[n];

    for(int i = 0; i < n; i++)
        chessArr[i] = new char[m];

    // get input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> color;
            chessArr[i][j] = color;
        }
    }
    
    // get min
    minValue = min(getMinRepaint(chessArr, n, m, 'W'), getMinRepaint(chessArr, n, m, 'B'));
    cout << minValue << endl;

    // deallocate
    for(int k = 0; k < n; k++)
        delete[] chessArr[k];
    delete[] chessArr;

    return 0;
}