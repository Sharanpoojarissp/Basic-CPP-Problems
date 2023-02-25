//! Abundant Num = when number divisor have their sum greater than the number itself 
#include<iostream>
using namespace std;

void facto(int number){
     int facsum =0;
     int n = number;
     for(int i=1 ; i<= number ; i++ ){
        if(number%i == 0){
        facsum = facsum + i ; 
        }
     }
    // facsum = facsum - number;               
     if(facsum - n == n){
        cout<<" dont know for now "<<endl; 
     }
     else if(facsum - n > n){
        cout<<" it is abundant number"<<endl;
     }
     else cout<<" not an abundant number"<<endl;
}

int main(){
    int num = 10;
    facto(num);
    return 0;
}