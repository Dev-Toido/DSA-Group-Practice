// 3. Special Two-Digit Number 
//     A special two-digit number is such that when the sum of its digits is added to the product of its digits, the result is equal to the original two-digit number.
//     * *Example:* Consider the number 59.
//     * Sum of digits = 5 + 9 = 14
//     * Product of digits = 5 * 9 = 45
//     * Total of the sum of digits and product of digits = 14 + 45 = 59


//     * Task: Write a program to accept a two-digit number. Add the sum of its digits to the product of its digits. If the value is equal to the number input, display the message "Special 2 - digit number"; otherwise, display the message "Not a special two-digit number".

#include <iostream>
using namespace std;

int main() {
    int n,sum,product;
    cout<<"Enter a two digit number: ";cin>>n;
    
    sum=(n%10)+((n%100-n%10)/10);
    product=(n%10)*((n%100-n%10)/10);

    cout<<((n==(sum+product))?"":"Not a ")<<"Special 2 - digit number"<<endl;
    return 0;
}