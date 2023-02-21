#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int threenumbers(int num1 , int num2 , int num3 ){

if(num1 > num2 && num1 > num3){
    cout<<"num1 is greatest"<<endl;
}

else if(num2 > num1 && num2 > num3){
    cout<<"num2 is greatest"<<endl;
}

else{
    cout<<"num3 is greatest"<<endl;
}

}

int main(){
    
    int num1;
    cout<<"enter num1 : "<<endl;
    cin>>num1;
        
    int num2;
    cout<<"enter num2 : "<<endl;
    cin>>num2;

    int num3;
    cout<<"enter num3 : "<<endl;
    cin>>num3;
        
    int answer = threenumbers(num1 , num2 , num3);
   
    cout<<answer<<endl;

    return 0;
}

/* Output mai ye kaise arha >? 1878006336
enter num1 :  
155
enter num2 : 
255
enter num3 : 
355
num3 is greatest
1878006336
*/