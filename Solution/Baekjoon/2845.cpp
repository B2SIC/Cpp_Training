#include <iostream>

using namespace std;

int main()
{
    int peCount, extent;
    int sangCount;
    int arrArticleCount[5];

    cin >> peCount >> extent;
    sangCount = peCount * extent;

    for(int i = 0; i < 5; ++i)
        cin >> arrArticleCount[i];
    
    for(int j = 0; j < 5; ++j)
        cout << arrArticleCount[j] - sangCount << " ";
    return 0;
}