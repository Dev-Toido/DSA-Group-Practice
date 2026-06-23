// 10. Greatest Common Divisor (G.C.D)
//     Write a program to accept two numbers and find the Greatest Common Divisor (G.C.D) of those numbers.
//     * Sample Input: 25, 45
//     * Sample Output: The Greatest Divisor: 5
//     * *Bonus Formula for LCM:* 
//     ![Formula](image-1.png)

#include <iostream>
using namespace std;

int main() {
    
    int a,b,gcd;
    cout<<"Enter the two number to find the GCD: ";cin>>a>>b;

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"The GCD is "<<gcd<<endl;
    return 0;
}