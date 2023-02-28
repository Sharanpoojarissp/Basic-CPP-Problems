#include<iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

    float a  , b , c , rp , ip , root_one , root_two ; 
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    int d = (b*b)-(4*a*c);

    if(d == 0){
        cout<<"the roots are real and same "<<endl;
        root_one = -b+sqrt(d)/2*a;
        root_two = -b-sqrt(d)/2*a;      
        cout<<"the roots of the given quadratic equation is "<<root_one<<" "<<root_two<<endl;
    }

    else if(d > 0){
        cout<<"the roots are real and different "<<endl;
        root_one = -b+sqrt(d)/2*a;
        root_two = -b-sqrt(d)/2*a;
        cout<<"the roots of the given quadratic equation is "<<root_one<<" "<<root_two<<endl;
    }

    else{
        cout<<"the roots are complex and imaginary "<<endl;
        rp = -(double)b / (2 * a);
        ip =-(double)b / (2 * a);
        cout << -(double)b / (2 * a) << " + i" << d << -(double)b / (2 * a) << " - i" << d;
    }

    return 0;
}
