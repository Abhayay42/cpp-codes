#include <bits/stdc++.h>
#include <string>
using namespace std;

string tog(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}
int main()
{
    string str;

    cin >> str;
    cout << tog(str) << endl;
    return 0;
}