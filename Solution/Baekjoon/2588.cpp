#include <iostream>

using namespace std;

int main()
{
    // get number to n1, n2
    int n1, n2;
    int p3, p4, p5, p6;

    cin >> n1;
    cin >> n2;

    p6 = n1 * n2;
    p5 = n1 * (n2 / 100);
    n2 %= 100;

    p4 = n1 * (n2 / 10);
    n2 %= 10;

    p3 = n1 * n2;

    cout << p3 << endl;
    cout << p4 << endl;
    cout << p5 << endl;
    cout << p6 << endl;
    
    return 0;
}