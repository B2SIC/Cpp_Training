#include <iostream>

using namespace std;

int main()
{
    int hour, minute, second;
    int cookingTime; // second
    
    cin >> hour >> minute >> second;
    cin >> cookingTime;

    minute += cookingTime / 60;
    second += cookingTime % 60;

    if(second >= 60)
    {
        minute += second / 60;
        second = second % 60;
    }

    if(minute >= 60)
    {
        hour += minute / 60;
        minute = minute % 60;
    }

    if(hour >= 24)
    {
        hour %= 24;
    }

    cout << hour << " " << minute << " " << second << endl;

    return 0;
}