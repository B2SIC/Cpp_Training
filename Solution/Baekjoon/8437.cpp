#include <iostream>

using namespace std;

int main()
{
    int apple, moreApple;
    int klaudia, natalia;
    cin >> apple >> moreApple;

    // even number
    if (apple % 2 == 0)
    {
        klaudia = apple / 2 + (moreApple / 2);
        natalia = apple / 2 - (moreApple / 2);
    }else // odd number
    {
        klaudia = (apple / 2) + 1 + (moreApple / 2);
        natalia = (apple / 2) - (moreApple / 2);
    }
    
    cout << klaudia << endl;
    cout << natalia << endl;

    return 0;
}