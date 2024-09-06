#include <iostream>
using namespace std;


int main(){
  int num;
  cout << ">>";
  cin >> num;

  switch (num)
  {
  case 1:
    cout<< "Number is 1";
    break;
  case 2:
    cout<<"Number is 2";
    break;

  default:
    cout<< "Number is neither 1 nor 2";
  }

}