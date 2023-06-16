#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int GcdUsingEuclidian( int number1 , int number2 ){
    // 0 24 
    if(number1 == 0){
        return number2;
    }

    // 24 0 
    if(number2 == 0){
        return number1;
    }

    while ( number1 != number2){ 
        if(number1 > number2 ){                     // 72 24 , 
            number1 = number1 - number2;
        }

        else{
            number2 = number2-number1;
        }
    }
    return number1;
    // return number2;
}

int main(){

    int number1 = 72 ;
    int number2 = 24 ;

    int ans = GcdUsingEuclidian(number1,number2);
    cout << " the gcd is : " << ans << endl;

    return 0;
}