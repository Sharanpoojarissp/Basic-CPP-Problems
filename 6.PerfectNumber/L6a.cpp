#include<iostream>
using namespace std;

bool isPerfect(int number){
    int sum = 0;
    for(int i=1 ; i<number ; i++){
        if(number%i == 0){
            sum = sum + i;
        }
    }

    if(sum == number){
        return true;
    }

    else return false;
}

int main(){

//!method 1 - 
int pass_this_number = 28;
if(isPerfect(pass_this_number)){
    cout<<"perfect number "<<endl;
}
else cout<<"not a perfect number"<<endl;
    return 0;

//!method 2 - 
// bool answer = isPerfect(28);
// if(answer){
//     cout<<"yes it is perfecct number "<<endl;
// }
// else cout<<"not "<<endl;

//!method 3 -
// int pass_this_number_brother = 28;
// int answer = isPerfect(pass_this_number_brother);
// if(answer == true){
//     cout<<"yes"<<endl;
// }
// else cout<<"nope"<<endl;


}