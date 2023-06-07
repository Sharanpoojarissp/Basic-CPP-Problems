#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool friendlyPair(int num1 , int num2){
        int sum1 = 0;
        int sum2 = 0;

        for(int i=1 ; i<num1 ; i++  ){
            if ( num1 % i == 0 ){
                sum1 = sum1 + i;
            }
        }

        for(int i=2 ; i<num2 ; i++  ){
            if ( num2 % i == 0 ){
                sum2 = sum2 + i;
            }
        }

        if((sum1/num1) ==  (sum2/num2)){
            return true;
        }
        else{
            return false;
        }
}

int main(){
    
    int num1 = 30 ;
    int num2 = 40;
    
    if(friendlyPair(num1 , num2)){
        cout<<" it is friendly pair" << endl;
    }
    else{
        cout<<" it is not a friendly pair " << endl;
    }
    return 0;
}