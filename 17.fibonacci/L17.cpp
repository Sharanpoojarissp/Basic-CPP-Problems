#include<iostream>
using namespace std;

void fibonacci(int n){
    int num1 = 0;
    int num2 = 1;
    int nextnumber_is_add_of_num1_num2 ;

    cout<<"the fibonacci series upto number n is : ";
    cout<<num1<<" "<<num2<<" ";

    for(int i=3  ; i <= n ; i++){
        nextnumber_is_add_of_num1_num2 = num1 + num2;
        cout<<nextnumber_is_add_of_num1_num2<<" ";
        num1 = num2;
        num2 = nextnumber_is_add_of_num1_num2;
    }
}

int main(){
    
    cout<<"enter the value of n : "<<endl;
    int number;
    cin>>number;

    fibonacci(number);

    return 0;
}