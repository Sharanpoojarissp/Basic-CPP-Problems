#include<iostream>
using namespace std;

int power(int a , int b){     // a - 10 , b - 2         10*10 

    int answer;
    answer = 1;
    for(int i = 1  ; i <= b ; i++ ){
        answer = answer * a ; 
    }

    return answer;
}
// 2 to the power 4 => 16 , 2,10 ,, 3,15
int main(){
        int a = 2;
        int b = 6;

        cout<<power( 2 , 6);
    return 0;
}