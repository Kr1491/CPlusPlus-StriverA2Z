#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 0; i < a-2; i++)
    {
        cout<<" *";
    }
    cout<<endl;
    
    for (int i = 0; i < a; i++)
    {
        cout<<" *    * ";
        cout<<endl;
    }
    

    for (int i = 0; i < a-2; i++)
    {
        cout<<"*";
    }
    


}