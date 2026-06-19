// 1. Number Categories & Greatest Value
//     Write a program to input three numbers (positive or negative). If they are unequal, then display the greatest number; otherwise, display that they are equal. The program also displays whether the numbers entered by the user are 'All positive', 'All negative', or 'Mixed numbers'.
//     * Sample Input: 56, -15, 12
//     * Sample Output: * The greatest number is 56
//     * Entered numbers are mixed numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "They are equal!" << endl;
    }
    else
    {
        cout << "The greatest number is " << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) << endl;
        if (a >= 0 && b >= 0 && c >= 0)
        {
            cout << "All positive" << endl;
        }
        else if (a < 0 && b < 0 && c < 0)
        {
            cout << "All negative" << endl;
        }
        else
        {
            cout << "Mixed numbers" << endl;
        }
    }
    return 0;
}