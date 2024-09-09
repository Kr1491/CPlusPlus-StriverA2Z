#include <iostream>

using namespace std;

void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= (n-1)/2; j++)
        {
            cout<<" ";
            
        }

        for (int k = 1; k <= i ; k++)
        {
            if (i%2 !=0)
            {
                cout<<"*";
            }

            
            
        }

        cout<<endl;
        
        
    }
    
}

int main(){
    int n;
    cin>>n;
    nStarTriangle(n);
}