#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// if you used cin/cout -> you can see timeout.
// so, you need to use scanf/print.
// refer: https://gooddaytocode.blogspot.com/2016/07/cin-scanf.html

int binarySearch(vector<int> &numVector, int length, int key)
{
    int left = 0;
    int right = length - 1;
    int mid = (left + right) / 2;
        
    while(left <= right)
    {
        mid = (left + right) / 2;
        
        if(key == numVector[mid])
        {
            return 1;
        }else 
        {
            if(key < numVector[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int T, K;
    int tmpInput;
    vector<int> v;
    // cin >> T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &tmpInput);
        // cin >> tmpInput;
        v.push_back(tmpInput);
    }
    
    sort(v.begin(), v.end());

    scanf("%d", &K);
    // cin >> K;

    for(int k = 0; k < K; k++)
    {
        scanf("%d", &tmpInput);
        // cin >> tmpInput;
        // cout << binarySearch(v, T, tmpInput) << endl;
        printf("%d\n", binarySearch(v, T, tmpInput));
    }

    return 0;
}