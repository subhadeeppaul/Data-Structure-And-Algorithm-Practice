// Write a Program to Swap Two Numbers


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    // temp=x;
    // x=y;
    // y=temp;

    x=x+y;
    y=x-y;
    x=x-y;


    cout<<"After Swapping: "<<x<<" "<<y<<endl;
    
}