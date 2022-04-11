/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
*/


#include <iostream>

using namespace std;

int main (){

int num, key = 1;


    cout <<"Enter a number: ";
    cin >> num;

    cout << endl <<"The factors are: ";
    do {

            if (num % key == 0) {
                cout << " "<< key;
            }
        key++;

    } while (key<=num);

    cout << "\n\n";
    return 0;
}

/*
Task 1: Create a program in C++ that will accept a number and display 
all factors of the number.
Sample Output:
Input a number: 21
The factors are: 1 3 7 21
*/
