#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int facto( int num ){
    int answer = 1 ;
    for(int i=1 ; i<= num ; i++ ){
        answer = answer * i ;
    }
    return answer;
}

int permutation( int p , int r ){
    int nume , deno;
     nume = facto(p);                //p ka fac 
     deno = facto(p-r);              //p-r ka fac 

    int ans = nume/deno; 
    
    return ans;           // p div by p-r ka fac 
}

int main(){

    int n = 5;
    int r = 3;
   
    int nume = facto(n);
    int deno = facto(n-r);
    cout<<permutation(n , r);

    // cout<<nume/deno;

    // cout<<ans;

    return 0;
}