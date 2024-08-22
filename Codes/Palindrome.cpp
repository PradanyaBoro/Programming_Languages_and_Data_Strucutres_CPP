#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 121;
    int c = 0;
    string k1 = to_string(k);
    int n = k1.length();
    for (int i = 0; i < n; i++)
    {
        if (int(k1[i]) == int(k1[n - 1 - i]))
        {
            c = 1;
            if (i == (n - 1 - i))
                break;
        }
        else
            {c = 0;
            if (i == (n - 1 - i))
                break;
        break;}
    }
    if (c == 1)
        cout << "it is palindrome";
    else
        cout << "it is not palindrome";
}
