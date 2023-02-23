#include<iostream>
using namespace std;

// int sqaure(int number){
//     int sq = 0;
//     sq = sq + (number*number);

//     return sq;
// }

bool check(int number){
    int digit1 , digit2 , noname , n ;
    noname = number*number;
    n = number;
    while( number !=0 ){
        // dono ka digit nikala --> 5 5 
        digit1 = number%10; 
        digit2 = noname%10;  
        if(digit1 != digit2) return false;  
        number = number/10;
        noname = noname/10;                                       
    }
    return true;
}
int main(){
    int num = 125;

    // cout<<sqaure(num);

    if(check(num)){
        cout<<"automorphic number ";
    }
    else{ 
        cout<<"not an automorphic number";
    }
    return 0;
}