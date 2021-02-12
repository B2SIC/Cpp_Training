#include <iostream>

using namespace std;

int main()
{
    int bugPrice[3];
    int beveragePrice[2];
    int cheapestPrice = 4000;

    cin >> bugPrice[0] >> bugPrice[1] >> bugPrice[2];
    cin >> beveragePrice[0] >> beveragePrice[1];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if((bugPrice[i] + beveragePrice[j] - 50) < cheapestPrice)
                cheapestPrice = bugPrice[i] + beveragePrice[j] - 50;
        }
    }

    cout << cheapestPrice << endl;
    return 0;
}