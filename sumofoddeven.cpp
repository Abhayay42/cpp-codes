#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int evensum = 0;
    int oddsum = 0;
    while (n > 0)
    {
        int last = n % 10;
        if (last % 2 == 0)
        {
            evensum = last + evensum;
        }
        else
        {
            oddsum = last + oddsum;
        }
        n = n / 10;
    }
    cout << oddsum << " " << evensum;
}