// Write a Program to Find Largest Number Among Three Numbers entered by users



#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<a<<" is greater than "<<b<<" and "<<c<<endl;
    }

    else if(b>a && b>c) {
         cout<<b<<" is greater than "<<a<<" and "<<c<<endl;
    }

    else{
     cout<<c<<" is greater than "<<a<<" and "<<b<<endl;   
    }
}