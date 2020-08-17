#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    unsigned int result = 0;
    cin >> n;

    result = 3 * n + 1;
    result += n - 1;

    cout << result << endl;
}