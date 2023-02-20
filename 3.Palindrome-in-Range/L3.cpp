#include<iostream>
using namespace std;

bool isPalindrome(int number){
    int reverse = 0;
    int n = number;
    int digit;
    while(number!=0){
        digit = number % 10;        // 100 --> 0 , 10--> 0  , 1 
        reverse = (reverse*10) + digit; // 0 0 1
        number = number/10;             // 10 , 1  , 0
    }
    
    if(n == reverse){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    cout<<"enter: "<<endl;
    int lowerRange, UpperRange; 
    cin>>lowerRange>>UpperRange;

    for(int i=lowerRange ; i<= UpperRange ; i++){
        if(isPalindrome(i)){
            cout<<i<<" " <<endl;
        }
    }
    return 0;
}

