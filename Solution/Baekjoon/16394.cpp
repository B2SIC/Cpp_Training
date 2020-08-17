#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(false); // C stdio와 C++ 동기화 끊기
    cin.tie(NULL);

    int getYear;
    cin >> getYear;

    cout << getYear - 1946 << endl;
    return 0;
}