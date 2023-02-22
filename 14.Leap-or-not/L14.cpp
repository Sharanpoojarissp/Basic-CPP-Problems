#include<iostream>
using namespace std;

bool leapOrnot( int year){
    if (year % 400 == 0)
        return true;
 
    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)  
        return true;

           return false;
}



int main(){
    
    int year = 2010;

    if(leapOrnot(year)){
        cout<<"year is leap"<<endl;
    }

    else{
        cout<<"year is not leap"<<endl;
    }
    return 0;
}