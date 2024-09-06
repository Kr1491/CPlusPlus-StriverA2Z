#include <iostream>
using namespace std;

int main()
{
    int num;
    int out = 0;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            out = i + out;
        }

        else
        {
            continue;
        }
    }
    cout << out;
    return 0;
}