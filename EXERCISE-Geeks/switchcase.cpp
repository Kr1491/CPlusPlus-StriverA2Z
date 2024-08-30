#include <iostream>
using namespace std;
#include <math.h>
int switchcase(int choice)
{
  switch (choice)
  {
  case 1:
    int r;
    cin>>r;
    return M_PI*r*r;
    break;
    
  case 2:
    int l,b;
    cin>>l>>b;
    return l*b;
  }

}

int main()
{
  int ch;
  cout<<">>";
  cin>>ch;

  cout<<switchcase(ch);
}
