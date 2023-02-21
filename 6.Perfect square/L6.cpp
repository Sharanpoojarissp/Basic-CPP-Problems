#include<iostream>
using namespace std;

//!method 1 using search spaces 
bool isPerfectsquare(int number){
    for(int i = 0 ; i<number ; i++){
        if((i*i) == number){
            return true;
        }
    }
        return false;
}

int main(){
    
   int given;
   cout<<"enter the number :"<<endl;
   cin>>given;

   if((isPerfectsquare(given))){
        cout<<"perfect square"<<endl;
   }
   
   else{
    cout<<"not a perfect square"<<endl;   
   }

    return 0;
}

