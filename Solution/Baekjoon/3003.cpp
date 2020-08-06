#include <iostream>

using namespace std;

int main()
{
    int arrStandard[6] = {1, 1, 2, 2, 2, 8};
    int arrChess[6] = { 0 };
    for(int i = 0; i < 6; i++)
        cin >> arrChess[i];
    
    for(int j = 0; j < 6; j++)
    {
        cout << arrStandard[j] - arrChess[j] << " ";
    }
    return 0;
}