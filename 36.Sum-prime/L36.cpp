#include<iostream>
using namespace std;

bool checkprime( int number ){
    if (number <= 1)
        return false;
    for(int i = 2 ; i< number ; i++ ){
        if(number%i == 0)
            return false;
    }   
     return true;
}

//prime number sare odd hote hai except of 2 

bool isPossible(int num ){
    if(checkprime(num) && checkprime(num-2))
    return true;
    else return false;
}

int main(){
    int num = 13;
    if(isPossible(num)){
        cout<<"yes its possible " <<endl;
    }
    else cout<<" not possible at all "<<endl;
    return 0;
}


