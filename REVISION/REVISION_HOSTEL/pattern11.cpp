#include <iostream>

using namespace std;

int up_star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }

        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        cout<<"\n";
        
        
    }
    
}

int down_star(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*(n-i)-1; k++)
        {
            cout<<"*";
        }

        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        cout<<"\n";
        
        
    }
    
}

int main(){
    int a;
    cout<<">>";
    cin>>a;

    up_star(a);
    down_star(a);
}