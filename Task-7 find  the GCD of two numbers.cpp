/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
Task 7: Create a program in C++ that will accept two number and find 
the Greatest Common Divisor (GCD) of two numbers. 
Sample Output:
Input the first number: 20
Input the second number: 10
The Greatest Common Divisor is: 10

*/


#include <iostream>

using namespace std;

int main (){

int num1, num2, i=1, gcd;


    cout <<"Input the first number: ";
    cin >> num1;

    cout <<"Input the first number: ";
    cin >> num2;

    do {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    } while (i<=num1 && i<=num2);

    cout <<"\nThe Greatest Common Divisor is " << gcd<< endl;
return 0;
}
