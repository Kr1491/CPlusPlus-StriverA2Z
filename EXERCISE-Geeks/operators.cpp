#include <iostream>

using namespace std;


int cppOperators(int A, int B){
    int sum = A+B;
    int multiply = A*B;
    int d = max(A,B) - min(A,B);
    int c = max(A,B) / min(A,B);
    
    cout<<sum<<" "<<multiply<<" "<<d<< " "<<c;

}

int main(){
    cppOperators(2,4);
}