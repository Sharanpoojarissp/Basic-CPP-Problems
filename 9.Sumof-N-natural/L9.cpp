#include<iostream>
using namespace std;

//!method 1 - normally using loops 
// int sumofNatural(int n){
//     int sum = 0;
//     for(int i =1 ; i<=n ; i++){
//         sum = sum + i;
//     }

//     return sum;
// }

//!method 2 - using the formula 

int sumofNatural(int n){
    int sum = n*(n+1)/2;

    return sum;
}

int main(){
    
    int number = 16;
    

    // int answer = sumofNatural(number);
    int answer = sumofNatural(number);

    cout<<"The sum is : "<<answer<<endl;
    return 0;
}