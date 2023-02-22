#include<iostream>
using namespace std;

void factor(int number){
    for(int i = 1 ; i<= number ; i++){
        if(number%i == 0){
            cout<<i<<" ";
        }  
    }
}

int main(){

        int num_bheja = 9;  //6 is div by 1 2 3 6 print hona chahiye 

        factor(num_bheja);
    return 0;
}