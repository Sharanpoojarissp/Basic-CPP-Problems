#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool twoNumber(int a , int b){
    if(a > b){
    return true;
    }
    else{
    return false;
    }
}

int main(){
    
    int num1;
    cout<<"enter num1 : "<<endl;
    cin>>num1;
        
    int num2;
    cout<<"enter num2 : "<<endl;
    cin>>num2;
        

    if(twoNumber(num1 , num2)){
        cout<<" num1 is greater"<<endl;
    }
    else{
        cout<<" num2 is greater"<<endl;
    }

    return 0;
}
   
   
//!method 2 - using the max function directly 
// cout<<max(num1 , num2)<<endl;