//!code to check whether the number is palindrome or not 
#include<iostream>
using namespace std;

//? method 1 -- >this is using int as function 
// int isPalindrome(int number ){

//     int digit , reverse , n;
//     reverse = 0;
//     n = number;
//     while (number !=0 )
//     {
//         digit = number%10;
//         reverse = (reverse*10) + digit;
//         number = number/10;
//     }
    
//     if(n == reverse){
//         return true;
//     }

//     else{
//         return false;
//     }
// }


//? method 2 -- >this is using bool as function 
// bool isPalindrome(int number ){

//     int digit , reverse , n;
//     reverse = 0;
//     n = number;
//     while (number !=0 )
//     {
//         digit = number%10;
//         reverse = (reverse*10) + digit;
//         number = number/10;
//     }
    
//     if(n == reverse){
//         return true;
//     }

//     else{
//         return false;
//     }
// }


//? method 3 -- >this is using void as function 
// void isPalindrome(int number ){

//     int digit , reverse , n;
//     reverse = 0;
//     n = number;
//     while (number !=0 )
//     {
//         digit = number%10;
//         reverse = (reverse*10) + digit;
//         number = number/10;
//     }
    
//     if(n == reverse){
//         cout<<"this is palindrome";
//     }

//     else{
//        cout<<"this is not palindrome";
//     }
// }




int main(){

        int num = 1711;
    //? method 1 
    //    if(isPalindrome(num)){
    //     cout<<"the number is palindrome";
    //    }
    //    else cout<<"the number is not a palindrome";
      
    //? method 2 -
    //    if(isPalindrome(num)){
    //     cout<<"the number is palindrome";
    //    }
    //    else cout<<"the number is not a palindrome";
        
    // //?method3 -
    // isPalindrome(num);

    return 0;
}





























































// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"enter the number : "<<endl;
//     string str = "1010";

//     int start = 0;
//     int end = str.length() -1 ;

//     while(start < end)[
//         if(str[start] == str[end]){
//             start++; 
//             end--;
//         }

//     ]
//         cout<<"not palindrome"<<endl;

//     return 0;
// }   