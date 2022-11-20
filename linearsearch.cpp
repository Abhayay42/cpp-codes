#include <iostream>
using namespace std;
int linearsearch(int n){
     int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int M ;
    cin>>M;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == M)
        {
            return i;
        }
        else{
            return -1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a =linearsearch(n);
    cout<<a;
   
}