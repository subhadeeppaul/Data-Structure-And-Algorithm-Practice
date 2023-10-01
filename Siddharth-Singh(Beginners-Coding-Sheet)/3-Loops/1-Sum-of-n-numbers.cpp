// Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, sum=0;
   cin>>n;

   for(int i=0;i<=n;i++){
    sum=sum+i;
   }

   cout<<sum<<endl;
}