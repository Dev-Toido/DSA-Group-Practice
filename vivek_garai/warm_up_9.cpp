// 9. Automorphic Number
//     An Automorphic number is a number which is contained in the last digit(s) of its square. Write a program to input a number and check whether the number is Automorphic or not.
//     * Sample Input: 25
//     * Explanation: The square of 25 is 625, and 25 is present as the last two digits.
//     * Sample Output: 25 is an Automorphic Number.

#include <iostream>
using namespace std;

bool Check(int n)
{
    int sn=n*n;

    while(n>0){
        if(sn%10!=n%10){
            return false;
        }
        n/=10;
        sn/=10;
    }
    
    return true;
}

int main()
{
    int n;
    string testname = "automorphic";
    cout << "Enter a number to check it's " << testname << " or not: ";
    cin >> n;

    cout << n << " is " << ((Check(n)) ? "" : "not ") << "a " << testname << " number" << endl;
    return 0;
}