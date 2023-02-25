#include<iostream>
using namespace std;

int sumDigit(int number){
    int digit , sum , n ;
    sum = 0;
    while(number!=0){
        digit = number%10;
        sum = sum + digit;
        number = number/10;
    }
    return sum;
}

int main(){
    int a = 19951;
    cout<<sumDigit(a);
    return 0;
}