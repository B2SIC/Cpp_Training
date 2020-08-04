#include <iostream>

using namespace std;

int main()
{
    int caseT;
    int *arrPi;
    cin >> caseT;

    // 동적할당 사용
    arrPi = new int[caseT];

    for(int i = 0; i < caseT; i++)
    {
        int a, b;
        cin >> a >> b;
        arrPi[i] = a + b;
    }

    for(int j = 0; j < caseT; j++)
        cout << arrPi[j] << endl;
    
    // 메모리 반납
    delete arrPi;
    return 0;
}