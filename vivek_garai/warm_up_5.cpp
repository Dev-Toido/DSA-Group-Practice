// 5. Niven Number 
//     Write a program to input a number. Check and display whether it is a Niven number or not. (A number is said to be Niven if it is divisible by the sum of its digits).
//     * Sample Input: 126
//     * Explanation: Sum of its digits = 1 + 2 + 6 = 9, and 126 is divisible by 9.

#include <iostream>
using namespace std;

int main() {
    int n,dn,sum=0;
    cout<<"Enter a number to check it's niven or not: ";cin>>n;
    dn=n;

    while(dn>0){
        sum+=dn%10;
        dn/=10;
    }

    cout<<((n%sum==0)?"":"Not ")<<"A niven number"<<endl;
    return 0;
}