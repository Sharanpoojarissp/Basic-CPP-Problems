// #include<iostream>
// using namespace std;

//  long long int factorial(int number){

//    long long int ans = 1;
    

//     for(int i =1 ; i<=number ; i++){
//         ans = ans * i;
//     }

//     return ans;
    
// }

// int main(){
    
//     int n = 50;

//     cout<<factorial(n);


//     return 0;
// }


//used long long int 


//!method 2 - using recursion 

#include<iostream>
using namespace std;

int facto(int number){
    //base case --> when 0 ajaye toh return 1 kardena 
    if(number == 0)
    return 1;

    //recursive relation --> means

    int bada = number;

    int chota = facto(number-1);

    return bada*chota;

}

int main(){
    
    int num = 5;

    cout<<facto(num);

    return 0;
}



/*  a-3 to power b-5  means 33333 
int ans = 3; 
for( int i = 0; i<=number ; i++ ){
    ans = ans * i ;
}
*/