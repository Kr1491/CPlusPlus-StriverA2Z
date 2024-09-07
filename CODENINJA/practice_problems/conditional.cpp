#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int start, end, step;
    cin>>start;
    cin>>end;
    cin>>step;

    for (start; start <= end; start += step)
    {
        int far;
        far = (start - 32)*5/9;

        cout<<start<<" "<<far<<endl;
    }
    
    return 0;
}