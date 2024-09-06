#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int sal;
    char grade;
    cin>>sal>>grade;
    int allow;
    int hra = sal*0.2;
    int da = sal*0.5;
    int pf = sal*0.11;
    

    if (grade == 'A')
    {
        allow = 1700;
    }

    else if (grade == 'B')
    {
        allow = 1500;
    }
    
    else if (grade <= 'C' && grade >= 'Z')
    {
        allow = 1300;
    }
    int totalSalary = allow + hra + da + pf;
    cout<<round(totalSalary);
    
    
    return 0;
}