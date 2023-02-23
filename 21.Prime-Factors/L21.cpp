#include<iostream>
using namespace std;

void primeFactors( int number ){


    for(int i=2 ; i>1 ; i++){            
        if(number%i == 0);              
        cout<<i<< " "; 
    }
}

int main(){
    
    cout<<"Enter the number : "<<endl;
    int num_taken ;
    cin>> num_taken;

    primeFactors(num_taken);

    return 0;
}