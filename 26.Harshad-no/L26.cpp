// //! [Niven] OR Harshad number is a number which have its digits sum == Number%Digits-sum 
//! Method1 - Direct Method 
#include<iostream>
using namespace std;
/* suppose number is 15 */
bool harshadno(int number){
    int digit , n , sum ;
    sum = 0;
    n = number;
    while(number!=0){
    digit = number%10;              //5 
    sum = sum + digit;  
    number = number/10;               
    }

    if(n%sum == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    
int num1 = 379;             //378 is harshad number 

    if(harshadno(num1)){
        cout<<" it is an harshad number"<<endl;
    }
    else cout<<"not an harshad number"<<endl;
    return 0;
}    

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 378;
//     string s = to_string(num);
//     int sum = 0;
//     int n = num;
//     for(int i=0 ; i<s.length() ; i++ ){         //i<=s nhi bcs we dont know length of string
//        sum += s[i] - '0';                   //? NOTE : Watch a video of converting the chars into number 
//                                            //* SINCE : string mai chars hai , it need to be converted into number 
//     }   
//     if(n%sum == 0){
//         cout<<"it is harshad ";
//     }
//     else{
//         cout<<"not harshad";
//     }
//     return 0;
// }
// #include<bits/stdc++.h>

//! Method 2 - suing string function 
#include<iostream>
using namespace std;
string harshad(int number){
    string str = to_string(number);     //num converted into string
    int sum = 0;
    int n = number;
    for(int i=0 ; i < str.length() ; i++){
            sum = sum + str[i] - '0';
    }

    if(n % sum ==0 ){
        return "Its is harshad number";
    }
    else  return "Its is not a harshad number";
}

int main(){
int num1 = 17;
int num2 = 18;

cout<<harshad(num1)<<endl;
cout<<harshad(num2)<<endl;

return 0;

}