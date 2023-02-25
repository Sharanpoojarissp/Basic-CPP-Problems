//! Basic approach 
// #include<iostream>
// using namespace std;

// int sum(int lower , int upper){
//     int sum = 0;
//     for(int i = lower ; i<= upper ; i++ ){
//         sum = sum + i ;
//     }

//     return sum;
// }

// int main(){
//     int lower = 5;
//     int upper = 9;    
//     cout<<sum(lower , upper);
//     return 0;
// }

//! optimised approach 


#include<iostream>
using namespace std;

int main(){
    int l = 2;
    int r = 7;

    int sum1 = (l*(l-1))/2;         //l-1 why ? 
    int sum2 = (r*(r+1))/2;   

    int dif = sum2 - sum1 ;
    cout<<dif;
    return 0;
}