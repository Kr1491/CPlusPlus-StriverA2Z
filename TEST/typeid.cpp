#include <iostream>
using namespace std;
#include <typeinfo>

int main(){
    int a = 5;
    cout<<typeid(a).name();
}