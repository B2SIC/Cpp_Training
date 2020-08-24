#include <iostream>

using namespace std;

int main()
{
    int dice1, dice2, dice3;
    int prizeMoney = 0;

    cin >> dice1 >> dice2 >> dice3;

    if(dice1 == dice2 && dice1 == dice3)
    {
        prizeMoney += 10000;
        prizeMoney += dice1 * 1000;
    }else if(dice1 == dice2 || dice1 == dice3 || dice2 == dice3)
    {
        prizeMoney += 1000;

        if(dice1 == dice2 || dice1 == dice3)
            prizeMoney += dice1 * 100;
        else
            prizeMoney += dice2 * 100;
    }else{
        if(dice1 > dice2 && dice1 > dice3)
            prizeMoney += dice1 * 100;
        else if(dice2 > dice1 && dice2 > dice3)
            prizeMoney += dice2 * 100;
        else
            prizeMoney += dice3 * 100;
    }

    cout << prizeMoney << endl;
    return 0;
}