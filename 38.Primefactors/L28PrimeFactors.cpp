#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void primeFactorOfNumber( int number ) {

for(int divisor = 2 ; divisor * divisor <= number ; divisor++ ){
    while (number % divisor == 0){
        number = number / divisor ;
        cout << divisor << " " ;  
      }
    }

    if(number != 1 ){
       cout<< number  ; 
    }
}


int main(){
    int number = 1440 ;
    primeFactorOfNumber(number) ; 
    return 0;
}