#include <iostream>

using namespace std;

int main()
{
    int totalDays, langPage, mathPage;
    int maxLang, maxMath;
    int daysCount = 0;

    cin >> totalDays >> langPage >> mathPage >> maxLang >> maxMath;

    while(langPage > 0 || mathPage > 0)
    {
        langPage -= maxLang;
        mathPage -= maxMath;

        daysCount++;
    }

    cout << totalDays - daysCount << endl;
    return 0;
}