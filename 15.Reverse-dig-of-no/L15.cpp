#include<iostream>
#include <bits/stdc++.h>
using namespace std;
/* Iterative function to reverse digits of num*/
int reverseDigits(int n)
{
    int remainder;
    int reverse = 0 ;

	while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  return reverse;
}

/*Driver program to test reverseDigits*/
int main()
{
	int num = 455562;
    int num2 = 100005;
	// int answer = reverseDigits(num);
    cout << "Reverse of no. is " << reverseDigits(num)<<endl;
    cout << "Reverse of no. is " << reverseDigits(num2)<<endl;
	
	return 0;
}

// This code is contributed
// by Akanksha Rai(Abby_akku)
