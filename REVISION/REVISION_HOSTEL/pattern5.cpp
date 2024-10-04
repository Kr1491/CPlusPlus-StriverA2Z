#include <iostream>

using namespace std;

int main(){
    int a;
    cout<<">>";
    cin>>a;

    for (a; a>= 1; a--)
    {
        for (int i = 1; i <= a; i++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    
}