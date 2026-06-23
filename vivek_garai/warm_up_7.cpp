// 7. Neon Number
//     Write a program to enter a number and check whether the number is 'Neon' or not. A number is said to be 'Neon' if the sum of the digits of the square of the number is equal to the number itself.
//     * Sample Input: 9
//     * Sample Output: 9 * 9 = 81 -> 8 + 1 = 9 : 9 is a Neon number.

#include <iostream>
using namespace std;

bool Check(int n)
{
    int sn, sum = 0;
    sn = n * n;

    while (sn > 0)
    {
        sum += sn % 10;
        sn /= 10;
    }
    return (n == sum);
}

int main()
{
    int n;
    string testname = "neon";
    cout << "Enter a number to check it's " << testname << " or not: ";
    cin >> n;

    cout << n << " is " << ((Check(n)) ? "" : "not ") << "a " << testname << " number" << endl;
    return 0;
}