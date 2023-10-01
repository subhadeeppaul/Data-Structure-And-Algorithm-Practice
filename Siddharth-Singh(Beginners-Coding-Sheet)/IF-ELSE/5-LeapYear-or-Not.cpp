// Write a Program to Check whether a year entered by user is Leap Year or not

/*
leap year --> exactly divisible by 4 except for century years
e.g. 2100--> not a leap year
Conditions-
1.every leapyear is always divisible by 4
2. if year is divisble by 100 and 400 both then leap year or not
3. if year not divisible by 100 but divisble by 4then leap year
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin>>year;

    if(year%4==0){
        if(year%100==0){ //for check century year
            if(year%400==0)
            // if century years then check its divisible by 400
            {
                cout<<year<<" is a leap year"<<endl;
            }
            else{
                 cout<<year<<" is not a leap year"<<endl;
            }
        }
        //if not century year but divisible by 4
        else{
             cout<<year<<" is a leap year"<<endl;
        }
        
    }

    else{
        cout<<year<<" is not a leap year"<<endl;
    }
}