#include <iostream>

using namespace std;

int main()
{
    int arrTime[4];
    int sumTime = 0;
    for(int i = 0; i < 4; ++i){
        cin >> arrTime[i];
        sumTime += arrTime[i];
    }
    
    cout << sumTime / 60 << endl;
    cout << sumTime % 60 << endl;
    
    return 0;
}