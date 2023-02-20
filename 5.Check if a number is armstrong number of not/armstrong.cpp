#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == originalno);
}

    int main(){
    int num = 153;
    if(ArmstrongNumber(num)){
    cout<<" the num is armstrong";
    }
    else{
    cout<<" num is not armstrong";
     }

    return 0;
    }
