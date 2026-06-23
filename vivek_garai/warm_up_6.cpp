// 6. Perfect Number
//     Write a program to accept a number and check whether the number is perfect or not. A number is said to be perfect if the sum of its factors (including 1 and excluding the number itself) is the same as the original number.
//     * Sample Input: 6
//     * Sample Output: It is a perfect number.
//     * Explanation: The factors of 6 are 1, 2, 3 and 1 + 2 + 3 = 6.

#include <iostream>
using namespace std;

bool Check(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++){
        sum+=(n%i==0)?i:0;
    }
    return n==sum;
}

int main()
{
    int n;
    string testname = "perfect";
    cout << "Enter a number to check it's " << testname << " or not: ";
    cin >> n;

    cout << n << " is " << ((Check(n)) ? "" : "not ") << "a " << testname << " number" << endl;
    return 0;
}

