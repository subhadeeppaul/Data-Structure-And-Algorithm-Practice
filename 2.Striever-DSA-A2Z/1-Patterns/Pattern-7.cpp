/* n=5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
*/
#include<bits/stdc++.h>
using namespace std;

void pat7(int n){
    
    for(int i=0;i<n;i++){

        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }

        //space
         for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pat7(n);

}