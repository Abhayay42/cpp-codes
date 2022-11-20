#include <iostream>
using namespace std;

int primesieve(int num)
{

    int prime[100000] = {0};
    for (int i = 2; i < num; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= num; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    primesieve(n);
}