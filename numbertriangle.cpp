#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int key=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout <<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}