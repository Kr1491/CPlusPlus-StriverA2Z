#include <iostream>
using namespace std;


class Solution {
  public:
    string compareNM(int n, int m){
        if (n>m)
        {
          return "greater";
        }

        else if (n==m)
        {
          return "equal";
        }

        else if (n<m)
        {
          return "lesser";
        }
        
        
    }
};