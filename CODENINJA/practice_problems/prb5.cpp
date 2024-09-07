#include <iostream>
using namespace std;

int main() {
    int num;
    int odd = 0;
    int even = 0;
    cin>>num;
    while(num>0){
        int digit = num%10;
        if (digit%2 == 0)
        {
            even += digit;
        }

        else{
            odd += digit;
        }
        num = num/10;

        
        
    }
    cout<<even<<" "<<odd<<endl;
    return 0;
}