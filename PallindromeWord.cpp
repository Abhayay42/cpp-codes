#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of characaters : ";
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            bool check = 0; 
            cout << "word is not a pallindrome";
            break;
        }
        else
        {
            bool check = 1;
            cout << "Word is a pallindrome";
            break;
        }
    }
}