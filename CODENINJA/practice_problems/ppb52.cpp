#include <iostream>

using namespace std;

int print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        /* code */
        int n;
        cin>>n;
        print1(n);
    }
    
}