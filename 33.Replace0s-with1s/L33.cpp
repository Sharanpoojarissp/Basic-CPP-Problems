#include<iostream>
using namespace std;

int replace(int num){
    int digit , ans; 
    int temp = 1;
    ans = 0;
    while( num != 0){
    digit = num%10;
    if(digit == 0){
        digit = 1;
    }
        ans = digit * temp + ans;
        num = num/10;
        temp = temp*10;    
  }
  return ans;
}

int main(){
    int number = 10004;

    cout<<replace(number);
    return 0;
}