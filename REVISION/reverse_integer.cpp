#include <iostream>
using namespace std;

int main() {                        
    int num, reversedNum = 0, remainder;

    // Input the number
    cout << "Enter an integer: ";
    cin >> num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;  
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}