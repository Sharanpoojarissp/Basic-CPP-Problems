#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printGP(int a, int r, int n)
{   
    cout<<a<<" ";
    int curr_term;
    for (int i = 1; i < n; i++) {
        curr_term = a * pow(r, i);
        cout << curr_term << " ";
    }
}
 
int main(){
    int a = 2 , r = 2 , n = 10 ;
    printGP( a , r , n );
    return 0;
}

// a   ar2   ar3 ...... ar(n-1)