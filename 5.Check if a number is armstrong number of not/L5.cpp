//armstrong number - 123 = 1c + 2c + 3c ==> 1 + 8 + 27 nope 

#include<iostream>
using namespace std;

int main(){
    
    cout<<"enter the number : "<<endl;
    int num;
    cin>>num;

    int digit, temp , sum ;
    sum =0;
    temp = num;

    while(num > 0){
        digit = num%10;
        sum = sum + (digit*digit*digit);
        num = num/10;
    }

    if(temp == sum){
        cout<<"armstrong"<<endl;
    }
        else{
        cout<<"not "<<endl;
        }
    return 0;
}

//! real method to solve ! 
#include<iostream>
using namespace std;

bool armstrong( int number ){    // 123 
int digit , n , ans ; 
ans = 0;
n = number;
while( number !=0 ){
digit = number%10;  // 2  2 
ans = digit*digit*digit + ans;      // 0 + 8  + 8  + 1 
number = number/10;                 //12 + 1 
}   

if(n == ans){
return true;
}
else {
    return false;
}
}

