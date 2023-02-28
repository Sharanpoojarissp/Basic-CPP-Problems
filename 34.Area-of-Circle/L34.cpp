#include<iostream>
using namespace std;

// double areaCircle(int radius){
//     double pi = 3.142;
//     double area = (radius*radius*pi);

//     return area;
// }

//!void method 
void areaCircle(int radius){
    double area = 3.142 * (radius * radius);
    cout<<"area of the circle is : "<<area<<endl;
}


int main(){
    int radius_given_is = 9.25;

    //!normal methdd
    // cout<<"the area of the circle is : "<<areaCircle(radius_given_is)<<endl;


    //!void method 
    // areaCircle(radius_given_is);


    return 0;
}