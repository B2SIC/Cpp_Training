#include <iostream>

using namespace std;

int main()
{
    // A = 곡 개수, I = 평균 값
    int A, I;
    cin >> A >> I;
    cout << A * (I - 1) + 1 << endl;
    return 0;
}