#include <iostream>
using namespace std;
int up(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

int mid(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}

int down(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }
    
    
    
}

int main(){
    up(5);
    mid(5);
    down(5);

}