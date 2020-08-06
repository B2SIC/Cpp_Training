#include <iostream>

using namespace std;

int main()
{
    string shipData[6][4] = {
        {"SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE"},
        {"N2 Bomber", "Heavy Fighter", "Limited", "21"},
        {"J-Type 327", "Light Combat", "Unlimited", "1"},
        {"NX Cruiser", "Medium Fighter", "Limited", "18"},
        {"N1 Starfighter", "Medium Fighter", "Unlimited", "25"},
        {"Royal Cruiser", "Light Combat", "Limited", "4"}
    };

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (j == 0 || j == 1)
                cout.width(15);
            else if (j == 2)
                cout.width(11);
            else
                cout.width(10);
            cout << left << shipData[i][j];
        }
        cout << endl;
    }
    return 0;
}