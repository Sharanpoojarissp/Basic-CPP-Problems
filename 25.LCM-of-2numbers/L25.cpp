#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd( int num1 , int num2){
    int answer1 = 0;
    for(int i=1 ; i<= num1 || i<= num2  ; i++){
        if((num1 % i == 0) && (num2 % i == 0)){
            answer1 = i;
        }      
    }
    return answer1;
}

/* the reason for writing it as 1 is simply becasue --> Gcd(1,2) will  1%2 == 1 */

int main(){
    
    int num1 = 24;
    int num2 = 162;
   
   int a = gcd(num1,num2);
    // cout<<gcd(num1 , num2);

    int LCM = (num1*num2)/a;
    cout<<LCM;
    return 0;
}