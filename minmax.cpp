#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minnumber = INT_MAX;
    int maxnumber = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minnumber = min(minnumber, arr[i]);
        maxnumber = max(maxnumber, arr[i]);
    }

    cout << "Max number is " << maxnumber << " Min number is " << minnumber;
}