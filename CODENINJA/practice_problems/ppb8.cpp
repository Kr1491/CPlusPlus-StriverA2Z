#include <iostream>
using namespace std;

int main(){
    int n; //n=3
    cout<<">>";
    cin>>n;


    for (int i = 1; i <= n; i++) //outer loop
    {
        for (int j = 0; j <= n-i-1; j++){
            cout<<" ";
        }

        for (int k = 0; k < (2*i)-1; k++){
            cout<<"*";
        }

        for (int j = 0; j <= n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;

    }
    
}