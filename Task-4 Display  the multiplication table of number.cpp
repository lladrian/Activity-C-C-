/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
Task 4: Create a program in C++ that will accept a number and display 
the multiplication table of number. 
Sample Output:
Input the number upto: 4
Multiplication table of 4
4x1=4
4x2=8
4x3=12
4x4=16
4x5=20
4x6=24
4x7=28
4x8=32
4x9=36
4x10=40

*/

#include <iostream>

using namespace std;

int main (){

int multiNum, total=0, i=1, frameTotal=0;


    cout <<"Input the number upto: ";
    cin >> multiNum;

    cout <<"Multiplication table of: " << multiNum << endl;

    do {

        frameTotal += multiNum * i;
        if (i <= 10) {
            cout  << multiNum <<"*" << i << "=" << frameTotal <<endl;
        }

        i++;
        frameTotal = 0;

    } while (i<=10);

    return 0;
}
