// 8. Armstrong Number
//     Write a program  to enter a three-digit number and check whether the number is an Armstrong number or not. (A three-digit number is said to be Armstrong if the sum of the cubes of its digits is equal to the original number.)
//     * Sample Input: 153
//     * Sample Output: 153 is an Armstrong Number because 1^3 + 5^3 + 3^3 = 153.
//     * *Note:* An Armstrong number is more broadly defined as a number which is equal to the sum of its digits raised to the power of the total number of digits in the number (e.g., 1634 = 1^4 + 6^4 + 3^4 + 4^4).

#include <iostream>
#include <math.h>
using namespace std;

int intPow(int base,int exp){
    int result=1;
    while(exp>0){
        result*=base;
        exp--;
    }
    return result;
}

bool Check(int n)
{
    int dn, sum = 0, ndigit = 0;
    dn = n;
    // digit count
    int temp=n;
    while (temp>0) 
    {
        ndigit++;
        temp/=10;
    }
    
    while (dn > 0)
    {
        sum += intPow(dn % 10, ndigit);
        dn /= 10;
    }
    return n == sum;
}

int main()
{
    int n;
    string testname = "armstrong";
    cout << "Enter a number to check it's " << testname << " or not: ";
    cin >> n;

    cout << n << " is " << ((Check(n)) ? "" : "not ") << "a " << testname << " number" << endl;
    return 0;
}