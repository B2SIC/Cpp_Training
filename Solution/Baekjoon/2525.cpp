#include <iostream>

using namespace std;

int main()
{
    int hour, minute;
    int takingMinutes;
    
    cin >> hour >> minute;
    cin >> takingMinutes;

    hour += takingMinutes / 60;
    minute += takingMinutes % 60;

    if(minute >= 60){
        hour += minute / 60;
        minute = minute % 60;
    }

    if(hour >= 24){
        hour -= 24;
    }

    cout << hour << " " << minute << endl;

    return 0;
}