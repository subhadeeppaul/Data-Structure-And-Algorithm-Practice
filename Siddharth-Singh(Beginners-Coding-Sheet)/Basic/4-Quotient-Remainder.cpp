// Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,quo,rem;
    cin>>x>>y;
    quo=x/y;
    rem=x%y;
    cout<<"Quotient is: "<<quo<<endl;
    cout<<"Remainder is: "<<rem<<endl;
    
}