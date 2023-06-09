#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <vector> 
using namespace std;

//! function : 
vector<int> primeFactors(int number){
    vector<int> store; 

    // while it is a factor of 2 : 
    while(number % 2 == 0){
        store.push_back(2);
        number = number/2;
    }

    //check for the other divisors : 
    for(int div =3 ; div*div <= number ; div++){
        while(number % div == 0){
            store.push_back(div);
            number = number / div ;
        }
    } 

    // if it is equal to n : 
     if(number != 1 ){
      store.push_back(number);
    }
    return store;
}

int main(){
    int number = 1440;
    vector<int> factors = primeFactors(number);

    cout<<endl;
    cout<<" the prime factors of the number (using the vector method  :) "<< endl;

    // for(int i=0 ; i<answer.size)

    for( int answers_are : factors) {
        cout<< answers_are << " " ;
    }
    cout<<endl;

    return 0;
}