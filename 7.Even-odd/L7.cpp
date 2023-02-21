#include<iostream>
using namespace std;

bool isEvenOdd(int number){
    if(number % 2 ==0 ){
        return true;
    }

    else return false;
    
}

int main(){
    
int num1 = 23;
int num2 = 11;

if(isEvenOdd(num1)){
    cout<<"number 1 is : even number  "<<endl;
}
else cout<<"number 1 is : odd number"<<endl;

if(isEvenOdd(num2)){
    cout<<"number 2 is : even number "<<endl;
}
else cout<<"number 2 is : odd number "<<endl;
    return 0;
}