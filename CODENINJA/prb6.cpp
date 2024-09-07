#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int num, power;
    int out = 1;
    cout << ">>";
    cin >> num >> power;

    if (num == 0 && power == 0)
    {
        cout << 1;
    }

    else if (num != 0 && power == 0)
    {
        cout << 1;
    }

    else
    {
        for (int i = 1; i <= power; i++)
        {
            out = out * num;
        }
        cout << out;
    }

    return 0;
}