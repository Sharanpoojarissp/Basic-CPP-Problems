
/* number will be given to us 
first we take out the digit then apply factorial on that */

#include<iostream>
using namespace std;
int facto(int number ){
    int ans = 1;
    for(int i = 1; i <= number ; i++ ){
        ans = ans * i;
    }
    return ans;
}

bool strong( int number){
    int digit , sum , n;
    sum = 0;
    n = number;
    while(number != 0){
     digit = number%10;
     sum = sum + facto(digit);
     number = number/10;
}

if(n == sum){
    return true;
}

else{ 
    return false;
}
}

int main(){

    int pass_this  = 405851;

    if(strong(pass_this)){
        cout<<"strong";
    }

    else{
        cout<<"not strong"; 
    }
    return 0;

}
