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
// 1-100 
int main(){
    cout<<"Enter the lower range : "<<endl;
    int lower;
    cin>>lower;
    cout<<"Enter the upper ramge : "<<endl;
    int upper;
    cin>>upper;

    for(int i=lower ; i<=upper ; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}