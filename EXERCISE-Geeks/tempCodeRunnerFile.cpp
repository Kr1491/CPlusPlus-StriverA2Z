#include <iostream>

using namespace std;

int main(){
    int vow[5] = {'a','e','i','o','u'};
    int len = sizeof(vow);
    char a;
    cout<<">>";
    cin>>a;

    for (int i = 0; i < len-1 ; i++)
    {
        if (vow[i] == a)
        {
            cout<<"You entered a vowel!";
            break;
        }

        else{
            cout<<"You entered a consonant!";
        }
        
    }
    
}
