#include <iostream>

using namespace std;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to add two fractions and return the result as a simplified fraction
void addFractions(int num1, int den1, int num2, int den2, int& resNum, int& resDen) {
    // Finding the least common multiple (LCM) of the denominators
    int lcm = (den1 * den2) / gcd(den1, den2);

    // Adding the numerators with appropriate scaling
    resNum = (num1 * (lcm / den1)) + (num2 * (lcm / den2));
    resDen = lcm;

    // Simplifying the resulting fraction by dividing both numerator and denominator by their GCD
    int commonFactor = gcd(resNum, resDen);
    resNum /= commonFactor;
    resDen /= commonFactor;
}

int main() {
    int num1, den1, num2, den2;
    cout << "Enter the first fraction (numerator/denominator): ";
    cin >> num1 >> den1;
    cout << "Enter the second fraction (numerator/denominator): ";
    cin >> num2 >> den2;

    int resNum, resDen;
    addFractions(num1, den1, num2, den2, resNum, resDen);

    cout << "The sum of fractions is: " << resNum << "/" << resDen << endl;

    return 0;
}

//! simple method : 
// #include<iostream>
// #include <bits/stdc++.h>
// #include <cmath>
// using namespace std;
// int main() {

//     int num1, den1, num2, den2;
//     std::cout << "Enter the first fraction numerator: ";
//     std::cin >> num1;
//     std::cout << "Enter the first fraction denominator: ";
//     std::cin >> den1;
//     std::cout << "Enter the second fraction numerator: ";
//     std::cin >> num2;
//     std::cout << "Enter the second fraction denominator: ";
//     std::cin >> den2;

//     int FinalNumerator = num1*(den2) + num2*(den1);
//     int FinalDenominator = den1*den2 ; 

//     cout << FinalNumerator << "/" << FinalDenominator ;


//     return 0;
// }
