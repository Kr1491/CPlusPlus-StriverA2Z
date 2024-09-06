#include <iostream>

using namespace std;

void seeding(int n) {
	for (n; n >= 1; n--)
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}


int main(){
    seeding(2);
}