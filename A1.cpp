//Array to find maximum and minimum 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maxn=INT8_MIN;
    int minn=INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxn=max(maxn,arr[i]);
        minn=min(minn,arr[i]);
    }

    cout<<maxn<<" "<<minn<<" ";

    return 0;
}