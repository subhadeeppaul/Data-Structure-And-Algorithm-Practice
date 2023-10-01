// Write a Program to Check Whether a Character is Vowel or Consonant.


#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;
    cin>>a;

    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
    {
        cout<<a<< " is a Vowel"<<endl;
    }

    else{
        cout<<a<<" is consonent"<<endl;
    }
}