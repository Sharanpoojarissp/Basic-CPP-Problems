#include<iostream>
using namespace std;

//!normal method -1 
// bool isPosneg(int number){
//     if(number == 0 || number > 0){
//         return true;
//     }

//     else if(number < 0){
//         return false;
//     }
    
// }

//!method 2 - using bitwise operator 
//? Logic : 2 --> 000......010 ,, when +ve is rightshifted by 31 positions we get 0 at end 
//? Logic : -6--> 111.....1010 ,, when -ve is rightshifted by 31 positions we get 1 at end 

bool isPosNeg(int number){
    if(number >> 31 == 0){
        return true;
    }

    if(number >> 31 == 1){
        return false;
    }
}


int main(){
    
    // int answer = isPosneg(105);
    // if(answer == true){
    //     cout<<"it is positve"<<endl;
    // }

    // else cout<<"it is negative "<<endl;

   int answer = isPosNeg(-11);
    if(answer == true){
        cout<<"it is positve"<<endl;
    }
    //!only works when answer == true , dont not wrk incase of  else if(answer == false)    cout<<"negaative";
    else cout<<" it is negative"<<endl;
    
    return 0;
    }



