#include <iostream>

using namespace std;
int upstar(int n){
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

        cout<<endl;
    
    }
    
}


int downstar(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*(n-i-1) +1; k++)
        {
            cout<<"*";
        }

        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }

        cout<<endl;
           
            
    }
    
}
int main(){
    int a;
    cout<<">>";
    cin>>a;

    upstar(a);
    downstar(a);

}