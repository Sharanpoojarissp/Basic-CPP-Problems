#include<iostream>
using namespace std;

bool isPrime(int number){
    if(number <= 0 )
    return false;

    for(int i=2 ; i<number ; i++){
        if(number%i == 0)
                return false;
    }
        return true;
    
}

int main(){
    
    cout<<"Enter the number : "<<endl;
    int number;
    cin>>number;

   if(isPrime(number)){
    cout<<"is prime"<<endl;
   }

   else{
    cout<<"not prime"<<endl;
   }

   
    return 0;
}