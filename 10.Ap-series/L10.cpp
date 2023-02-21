#include<iostream>
using namespace std;

int APseries(int a , int d , int n){
    int ans = a;
    for(int i =1 ; i<= n ; i++ ){
        cout<<ans<<" ";
        ans = ans + d;     
    }
}

int main(){
    
int a = 10;
int d = 2;
int n = 10;

cout<<APseries(a , d , n)<<endl;


    return 0;
}