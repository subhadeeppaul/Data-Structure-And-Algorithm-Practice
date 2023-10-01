// Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).

/* Concept: Solving Quadratic Equations

1. Quadratic Equation Format:
A quadratic equation looks like this: ax^2 + bx + c = 0, where 'a', 'b', and 'c' are numbers.

2. What Are Roots?
Roots are the solutions (values of 'x') that make the equation true.

3. Determining Roots:

We calculate something called the "discriminant" (D) using D = b^2 - 4ac.
Depending on D, we can tell how many roots there are.
4. Finding Roots:

We use a formula to find the roots: x = (-b ± √D) / (2a).
The ± means we have two possibilities: one with a plus sign (+) and one with a minus sign (-).
5. What D Tells Us:

If D < 0, there are no real roots (only complex roots).
If D = 0, there is one real root (repeated).
If D > 0, there are two distinct real roots.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    float x1,x2,realPart,imaginaryPart,descriminant,denominator;
    cout<<"Coefficient of x^2, x and consonant term are: "<<endl;;
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;;

   descriminant=(b * b) - (4 * a * c);
   denominator = 2*a;

    if(descriminant> 0){
        cout<<"roots are real and different"<<endl;
        x1=(-b+sqrt(descriminant))/denominator;
        x2=(-b-sqrt(descriminant))/denominator;
        cout<<"Root1 = "<<x1<<endl;
        cout<<"Root2 = "<<x2<<endl;
    }

    else if(descriminant==0){
        cout<<"Roots are real and same"<<endl;;
        x1=-b/descriminant; //i.e. -b/2a
        x2=x1;
        cout<<"Root1 = "<<x1<<endl;
        cout<<"Root2 = "<<x2<<endl;
    }

    else{
        realPart = -b/descriminant;
        imaginaryPart = sqrt(-descriminant)/denominator;
        cout<<"roots are complex and different"<<endl;
         cout<<"x1 = "<<realPart<<"+"<<imaginaryPart<<"i"<<endl;
         cout<<"x2 = "<<realPart<<"-"<<imaginaryPart<<"i"<<endl;
    }
}