// 4. Nature and Roots of a Quadratic Equation
//     The standard form of a quadratic equation is given by ax^2 + bx + c = 0, where d = b^2 - 4ac is known as the discriminant that determines the nature of the roots of the equation as:
//     * If d >= 0: Roots are real
//     * If d < 0: Roots are imaginary


//     Task: Write a program to determine the nature and the roots of a quadratic equation, taking a, b, c as input. If d = b^2 - 4ac is greater than or equal to zero, then display 'Roots are real'; otherwise, display 'Roots are imaginary'. The roots are determined by the formulas:

//     [Formula](image.png)

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b,c,d;
    float r1,r2;
    cout<<"A typical quadratic equation is given by ax^2 + bx + c = 0, now enter the values of a, b, c in sequence: ";cin>>a>>b>>c;

    d=b*b - 4*a*c;
    cout<<"Roots are "<<((d>=0)?"real":"imaginary")<<endl;

    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);

    if(d>=0){cout<<"The two roots of the equation are "<<r1<<" and "<<r2<<endl;}
    return 0;
}