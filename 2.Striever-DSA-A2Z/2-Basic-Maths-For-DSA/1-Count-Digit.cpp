/* 
n=530
o/p: 3
n=8798
o/p: 4
*/
#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){

    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigit(n);
}